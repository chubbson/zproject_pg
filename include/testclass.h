/*  =========================================================================
    testclass - class description

    Copyright (c) the Authors
    =========================================================================
*/

#ifndef TESTCLASS_H_INCLUDED
#define TESTCLASS_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new testclass
ZPROJECT_PG_EXPORT testclass_t *
    testclass_new (void);

//  Destroy the testclass
ZPROJECT_PG_EXPORT void
    testclass_destroy (testclass_t **self_p);

//  Self test of this class
ZPROJECT_PG_EXPORT void
    testclass_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif
