cmake_minimum_required(VERSION 4.0)
project(decklink_c)

set(CMAKE_CXX_STANDARD 14)

find_library(CORE_FOUNDATION CoreFoundation)
if (NOT CORE_FOUNDATION)
    message(FATAL_ERROR "CoreFoundation not found")
endif()

if(APPLE)
    set(PLATFORM_SOURCES
        interop/Mac/include/DeckLinkAPI.h
        interop/Mac/include/DeckLinkAPIConfiguration.h
        interop/Mac/include/DeckLinkAPIDeckControl.h
        interop/Mac/include/DeckLinkAPIDiscovery.h
        interop/Mac/include/DeckLinkAPIDispatch.cpp
        interop/Mac/include/DeckLinkAPIModes.h
        interop/Mac/include/DeckLinkAPITypes.h
        interop/Mac/include/DeckLinkAPIVersion.h
        interop/Mac/include/platform.h
        interop/Mac/include/platform.cpp
        )
else()
    set(PLATFORM_SOURCES
        interop/Linux/include/DeckLinkAPI.h
        interop/Linux/include/DeckLinkAPIConfiguration.h
        interop/Linux/include/DeckLinkAPIDeckControl.h
        interop/Linux/include/DeckLinkAPIDiscovery.h
        interop/Linux/include/DeckLinkAPIDispatch.cpp
        interop/Linux/include/DeckLinkAPIModes.h
        interop/Linux/include/DeckLinkAPITypes.h
        interop/Linux/include/DeckLinkAPIVersion.h
        interop/Linux/include/LinuxCOM.h
        )
endif()

set(SOURCES
        include/api.h
        include/custom.h
        include/custom_allocator.h
        include/decklink_c.h
        include/types.h
        include/util.h

        src/api.cpp
        src/callbacks.cpp
        src/callbacks.h
        src/custom.cpp
        src/custom_allocator.cpp
        src/types.h
        src/util.cpp

        ${PLATFORM_SOURCES}
        )

include_directories(.)
add_library(decklink_c STATIC ${SOURCES})

if(APPLE)
    target_link_libraries(decklink_c "-framework CoreFoundation")
    set_target_properties(decklink_c PROPERTIES LINK_FLAGS "-Wl,-F/Library/Frameworks")
endif()

target_link_libraries(decklink_c dl pthread)

add_subdirectory(examples)

install(TARGETS decklink_c DESTINATION .)
