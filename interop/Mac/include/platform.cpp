
#include "platform.h"

HRESULT GetDeckLinkIterator(IDeckLinkIterator **deckLinkIterator)
{
	HRESULT result = S_OK;

	// Create an IDeckLinkIterator object to enumerate all DeckLink cards in the system
	*deckLinkIterator = CreateDeckLinkIteratorInstance();
	if (*deckLinkIterator == NULL)
	{
		result = E_FAIL;
	}

	return result;
}

bool CFStringRefToConstChar(CFStringRef aString, const char **outString) {
  if (aString == NULL) {
    return true;
  }

  CFIndex length = CFStringGetLength(aString);
  CFIndex maxSize = CFStringGetMaximumSizeForEncoding(length, kCFStringEncodingUTF8) + 1;

  *outString = (const char *)malloc(maxSize);

  if (CFStringGetCString(aString, (char*)*outString, maxSize, kCFStringEncodingUTF8)) {
    return true;
  } else {
    free(outString);
    return false;
  }
}
