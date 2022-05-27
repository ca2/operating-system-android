#pragma once


#include "app-core/audio/_.h"


#define DEBUG_SND TRACE


#if defined(_AUDIO_OPENSLES_LIBRARY)
   #define CLASS_DECL_AUDIO_OPENSLES  CLASS_DECL_EXPORT
#else
   #define CLASS_DECL_AUDIO_OPENSLES  CLASS_DECL_IMPORT
#endif



