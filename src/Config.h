#ifndef TINYSVG_CONFIG_H_
  #define TINYSVG_CONFIG_H_

  #ifndef PACKAGE_NAMESPACE
    #define PACKAGE_NAMESPACE tinysvg
  #else
    #error Macro conflicts. You have already defined PACKAGE_NAMESPACE.
  #endif

  #ifndef NAMESPACE_BEGIN
    #define NAMESPACE_BEGIN namespace PACKAGE_NAMESPACE {
  #else
    #error Macro conflicts. You have already defined NAMESPACE_BEGIN.
  #endif

  #ifndef NAMESPACE_END
    #define NAMESPACE_END }
  #else
    #error Macro conflicts. You have already defined NAMESPACE_END
  #endif

  #if defined(_DEBUG) || defined(DEBUG)
    #define TINYSVG_DEBUG
  #endif

  #ifdef _WIN32
    #define TINYSVG_WIN32
  #endif

  #if defined(TINYSVG_DEBUG) && defined(TINYSVG_WIN32)
    #define _CRTDBG_MAP_ALLOC
    #include <stdlib.h>
    #include <crtdbg.h>
    #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
    // Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
    // allocations to be of _CLIENT_BLOCK type
  #endif

#endif // TINYSVG_CONFIG_H_