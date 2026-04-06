#ifndef DECKLINK_C_PLATFORM_H
#define DECKLINK_C_PLATFORM_H

#include <string>
#include <functional>
#include <stdint.h>
#include "DeckLinkAPI.h"
#include <CoreFoundation/CoreFoundation.h>

HRESULT GetDeckLinkIterator(IDeckLinkIterator **deckLinkIterator);

bool CFStringRefToConstChar(CFStringRef aString, const char **outString);

#define IID_IUnknown		(REFIID){0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}
#define IUnknownUUID		IID_IUnknown

#endif //DECKLINK_C_PLATFORM_H
