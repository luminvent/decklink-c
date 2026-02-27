#ifndef DECKLINK_C_CUSTOM_ALLOCATOR_H
#define DECKLINK_C_CUSTOM_ALLOCATOR_H

#include "./api.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Custom Video Buffer ---- */

/* Callback: return the buffer pointer for GetBytes() */
typedef HRESULT cdecklink_custom_video_buffer_get_bytes_fn(void *context, void **buffer);
/* Callback: called on StartAccess */
typedef HRESULT cdecklink_custom_video_buffer_start_access_fn(void *context, DecklinkBufferAccessFlags flags);
/* Callback: called on EndAccess */
typedef HRESULT cdecklink_custom_video_buffer_end_access_fn(void *context, DecklinkBufferAccessFlags flags);
/* Callback: called when the buffer is released (ref count drops to 0) */
typedef void cdecklink_custom_video_buffer_release_fn(void *context);

HRESULT cdecklink_custom_video_buffer_create(
    void *context,
    cdecklink_custom_video_buffer_get_bytes_fn *get_bytes,
    cdecklink_custom_video_buffer_start_access_fn *start_access,
    cdecklink_custom_video_buffer_end_access_fn *end_access,
    cdecklink_custom_video_buffer_release_fn *release_fn,
    cdecklink_video_buffer_t **out_buffer
);

/* ---- Custom Video Buffer Allocator ---- */

/* Callback: allocate a new video buffer */
typedef HRESULT cdecklink_custom_video_buffer_allocator_allocate_fn(
    void *context,
    cdecklink_video_buffer_t **allocatedBuffer
);
/* Callback: called when the allocator is released */
typedef void cdecklink_custom_video_buffer_allocator_release_fn(void *context);

HRESULT cdecklink_custom_video_buffer_allocator_create(
    void *context,
    cdecklink_custom_video_buffer_allocator_allocate_fn *allocate,
    cdecklink_custom_video_buffer_allocator_release_fn *release_fn,
    cdecklink_video_buffer_allocator_t **out_allocator
);

/* ---- Custom Video Buffer Allocator Provider ---- */

/* Callback: get/create an allocator for the given buffer parameters */
typedef HRESULT cdecklink_custom_video_buffer_allocator_provider_get_allocator_fn(
    void *context,
    uint32_t bufferSize,
    uint32_t width,
    uint32_t height,
    uint32_t rowBytes,
    DecklinkPixelFormat pixelFormat,
    cdecklink_video_buffer_allocator_t **allocator
);
/* Callback: called when the provider is released */
typedef void cdecklink_custom_video_buffer_allocator_provider_release_fn(void *context);

HRESULT cdecklink_custom_video_buffer_allocator_provider_create(
    void *context,
    cdecklink_custom_video_buffer_allocator_provider_get_allocator_fn *get_allocator,
    cdecklink_custom_video_buffer_allocator_provider_release_fn *release_fn,
    cdecklink_video_buffer_allocator_provider_t **out_provider
);

#ifdef __cplusplus
}
#endif

#endif // DECKLINK_C_CUSTOM_ALLOCATOR_H
