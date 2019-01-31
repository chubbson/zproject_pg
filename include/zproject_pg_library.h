/*  =========================================================================
    zproject_pg - generated layer of public API

    Copyright (c) the Authors

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef ZPROJECT_PG_LIBRARY_H_INCLUDED
#define ZPROJECT_PG_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  ZPROJECT_PG version macros for compile-time API detection
#define ZPROJECT_PG_VERSION_MAJOR 0
#define ZPROJECT_PG_VERSION_MINOR 0
#define ZPROJECT_PG_VERSION_PATCH 0

#define ZPROJECT_PG_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ZPROJECT_PG_VERSION \
    ZPROJECT_PG_MAKE_VERSION(ZPROJECT_PG_VERSION_MAJOR, ZPROJECT_PG_VERSION_MINOR, ZPROJECT_PG_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined ZPROJECT_PG_STATIC
#       define ZPROJECT_PG_EXPORT
#   elif defined ZPROJECT_PG_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define ZPROJECT_PG_EXPORT __declspec(dllexport)
#       else
#           define ZPROJECT_PG_EXPORT
#       endif
#   elif defined ZPROJECT_PG_EXPORTS
#       define ZPROJECT_PG_EXPORT __declspec(dllexport)
#   else
#       define ZPROJECT_PG_EXPORT __declspec(dllimport)
#   endif
#   define ZPROJECT_PG_PRIVATE
#elif defined (__CYGWIN__)
#   define ZPROJECT_PG_EXPORT
#   define ZPROJECT_PG_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define ZPROJECT_PG_PRIVATE __attribute__ ((visibility ("hidden")))
#       define ZPROJECT_PG_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define ZPROJECT_PG_PRIVATE
#       define ZPROJECT_PG_EXPORT
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  ZPROJECT_PG_BUILD_DRAFT_API
#define ZPROJECT_PG_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef ZPROJECT_PG_BUILD_DRAFT_API
typedef struct _testclass_t testclass_t;
#define TESTCLASS_T_DEFINED
#endif // ZPROJECT_PG_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef ZPROJECT_PG_BUILD_DRAFT_API
#include "testclass.h"
#endif // ZPROJECT_PG_BUILD_DRAFT_API

#ifdef ZPROJECT_PG_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
ZPROJECT_PG_EXPORT void
    zproject_pg_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // ZPROJECT_PG_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
