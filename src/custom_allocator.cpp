#include "./types.h"
#include "../include/custom_allocator.h"
#if defined(__APPLE__)
#include "../interop/Mac/include/platform.h"
#endif

#include <atomic>
#include <cstring>

/* =========================================================================
   Custom IDeckLinkVideoBuffer
   ========================================================================= */

class CustomVideoBuffer : public IDeckLinkVideoBuffer {
    std::atomic<int> ref_count_{1};
    void *ctx_;
    cdecklink_custom_video_buffer_get_bytes_fn *get_bytes_fn_;
    cdecklink_custom_video_buffer_start_access_fn *start_access_fn_;
    cdecklink_custom_video_buffer_end_access_fn *end_access_fn_;
    cdecklink_custom_video_buffer_release_fn *release_fn_;

public:
    CustomVideoBuffer(
        void *ctx,
        cdecklink_custom_video_buffer_get_bytes_fn *get_bytes,
        cdecklink_custom_video_buffer_start_access_fn *start_access,
        cdecklink_custom_video_buffer_end_access_fn *end_access,
        cdecklink_custom_video_buffer_release_fn *release_fn
    ) : ctx_(ctx),
        get_bytes_fn_(get_bytes),
        start_access_fn_(start_access),
        end_access_fn_(end_access),
        release_fn_(release_fn)
    {}

    ~CustomVideoBuffer() {
        if (release_fn_) {
            release_fn_(ctx_);
        }
    }

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, LPVOID *ppv) override {
        REFIID iid_iunknown = IID_IUnknown;
        if (memcmp(&iid, &IID_IDeckLinkVideoBuffer, sizeof(REFIID)) == 0) {
            *ppv = static_cast<IDeckLinkVideoBuffer*>(this);
            AddRef();
            return S_OK;
        } else if (memcmp(&iid, &iid_iunknown, sizeof(REFIID)) == 0) {
            *ppv = static_cast<IDeckLinkVideoBuffer*>(this);
            AddRef();
            return S_OK;
        }
        return E_NOINTERFACE;
    }

    ULONG STDMETHODCALLTYPE AddRef() override { return ++ref_count_; }

    ULONG STDMETHODCALLTYPE Release() override {
        if (--ref_count_ == 0) {
            delete this;
            return 0;
        }
        return ref_count_;
    }

    // IDeckLinkVideoBuffer
    HRESULT STDMETHODCALLTYPE GetBytes(void **buffer) override {
        if (get_bytes_fn_) return get_bytes_fn_(ctx_, buffer);
        return E_NOTIMPL;
    }

    HRESULT STDMETHODCALLTYPE StartAccess(BMDBufferAccessFlags flags) override {
        if (start_access_fn_) return start_access_fn_(ctx_, flags);
        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE EndAccess(BMDBufferAccessFlags flags) override {
        if (end_access_fn_) return end_access_fn_(ctx_, flags);
        return S_OK;
    }
};

HRESULT cdecklink_custom_video_buffer_create(
    void *context,
    cdecklink_custom_video_buffer_get_bytes_fn *get_bytes,
    cdecklink_custom_video_buffer_start_access_fn *start_access,
    cdecklink_custom_video_buffer_end_access_fn *end_access,
    cdecklink_custom_video_buffer_release_fn *release_fn,
    cdecklink_video_buffer_t **out_buffer
) {
    if (!out_buffer) return E_INVALIDARG;
    *out_buffer = new CustomVideoBuffer(context, get_bytes, start_access, end_access, release_fn);
    return S_OK;
}

/* =========================================================================
   Custom IDeckLinkVideoBufferAllocator
   ========================================================================= */

class CustomVideoBufferAllocator : public IDeckLinkVideoBufferAllocator {
    std::atomic<int> ref_count_{1};
    void *ctx_;
    cdecklink_custom_video_buffer_allocator_allocate_fn *allocate_fn_;
    cdecklink_custom_video_buffer_allocator_release_fn *release_fn_;

public:
    CustomVideoBufferAllocator(
        void *ctx,
        cdecklink_custom_video_buffer_allocator_allocate_fn *allocate,
        cdecklink_custom_video_buffer_allocator_release_fn *release_fn
    ) : ctx_(ctx), allocate_fn_(allocate), release_fn_(release_fn)
    {}

    ~CustomVideoBufferAllocator() {
        if (release_fn_) {
            release_fn_(ctx_);
        }
    }

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, LPVOID *ppv) override {
        REFIID iid_iunknown = IID_IUnknown;
        if (memcmp(&iid, &iid_iunknown, sizeof(REFIID)) == 0) {
            *ppv = static_cast<IDeckLinkVideoBufferAllocator*>(this);
            AddRef();
            return S_OK;
        }
        return E_NOINTERFACE;
    }

    ULONG STDMETHODCALLTYPE AddRef() override { return ++ref_count_; }

    ULONG STDMETHODCALLTYPE Release() override {
        if (--ref_count_ == 0) {
            delete this;
            return 0;
        }
        return ref_count_;
    }

    // IDeckLinkVideoBufferAllocator
    HRESULT STDMETHODCALLTYPE AllocateVideoBuffer(IDeckLinkVideoBuffer **allocatedBuffer) override {
        if (allocate_fn_) return allocate_fn_(ctx_, (cdecklink_video_buffer_t **)allocatedBuffer);
        return E_NOTIMPL;
    }
};

HRESULT cdecklink_custom_video_buffer_allocator_create(
    void *context,
    cdecklink_custom_video_buffer_allocator_allocate_fn *allocate,
    cdecklink_custom_video_buffer_allocator_release_fn *release_fn,
    cdecklink_video_buffer_allocator_t **out_allocator
) {
    if (!out_allocator) return E_INVALIDARG;
    *out_allocator = new CustomVideoBufferAllocator(context, allocate, release_fn);
    return S_OK;
}

/* =========================================================================
   Custom IDeckLinkVideoBufferAllocatorProvider
   ========================================================================= */

class CustomVideoBufferAllocatorProvider : public IDeckLinkVideoBufferAllocatorProvider {
    std::atomic<int> ref_count_{1};
    void *ctx_;
    cdecklink_custom_video_buffer_allocator_provider_get_allocator_fn *get_allocator_fn_;
    cdecklink_custom_video_buffer_allocator_provider_release_fn *release_fn_;

public:
    CustomVideoBufferAllocatorProvider(
        void *ctx,
        cdecklink_custom_video_buffer_allocator_provider_get_allocator_fn *get_allocator,
        cdecklink_custom_video_buffer_allocator_provider_release_fn *release_fn
    ) : ctx_(ctx), get_allocator_fn_(get_allocator), release_fn_(release_fn)
    {}

    ~CustomVideoBufferAllocatorProvider() {
        if (release_fn_) {
            release_fn_(ctx_);
        }
    }

    // IUnknown
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, LPVOID *ppv) override {
        REFIID iid_iunknown = IID_IUnknown;
        if (memcmp(&iid, &iid_iunknown, sizeof(REFIID)) == 0) {
            *ppv = static_cast<IDeckLinkVideoBufferAllocatorProvider*>(this);
            AddRef();
            return S_OK;
        }
        return E_NOINTERFACE;
    }

    ULONG STDMETHODCALLTYPE AddRef() override { return ++ref_count_; }

    ULONG STDMETHODCALLTYPE Release() override {
        if (--ref_count_ == 0) {
            delete this;
            return 0;
        }
        return ref_count_;
    }

    // IDeckLinkVideoBufferAllocatorProvider
    HRESULT STDMETHODCALLTYPE GetVideoBufferAllocator(
        uint32_t bufferSize,
        uint32_t width,
        uint32_t height,
        uint32_t rowBytes,
        BMDPixelFormat pixelFormat,
        IDeckLinkVideoBufferAllocator **allocator
    ) override {
        if (get_allocator_fn_) {
            return get_allocator_fn_(
                ctx_,
                bufferSize, width, height, rowBytes, pixelFormat,
                (cdecklink_video_buffer_allocator_t **)allocator
            );
        }
        return E_NOTIMPL;
    }
};

HRESULT cdecklink_custom_video_buffer_allocator_provider_create(
    void *context,
    cdecklink_custom_video_buffer_allocator_provider_get_allocator_fn *get_allocator,
    cdecklink_custom_video_buffer_allocator_provider_release_fn *release_fn,
    cdecklink_video_buffer_allocator_provider_t **out_provider
) {
    if (!out_provider) return E_INVALIDARG;
    *out_provider = new CustomVideoBufferAllocatorProvider(context, get_allocator, release_fn);
    return S_OK;
}
