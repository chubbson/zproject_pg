/*  =========================================================================
    testclass - class description

    Copyright (c) the Authors
    =========================================================================
*/

/*
@header
    testclass -
@discuss
@end
*/

#include "zproject_pg_classes.h"

//  Structure of our class

struct _testclass_t {
    int filler;     //  Declare class properties here
};


//  --------------------------------------------------------------------------
//  Create a new testclass

testclass_t *
testclass_new (void)
{
    testclass_t *self = (testclass_t *) zmalloc (sizeof (testclass_t));
    assert (self);
    //  Initialize class properties here
    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the testclass

void
testclass_destroy (testclass_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        testclass_t *self = *self_p;
        //  Free class properties here
        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}

//  --------------------------------------------------------------------------
//  Self test of this class

// If your selftest reads SCMed fixture data, please keep it in
// src/selftest-ro; if your test creates filesystem objects, please
// do so under src/selftest-rw.
// The following pattern is suggested for C selftest code:
//    char *filename = NULL;
//    filename = zsys_sprintf ("%s/%s", SELFTEST_DIR_RO, "mytemplate.file");
//    assert (filename);
//    ... use the "filename" for I/O ...
//    zstr_free (&filename);
// This way the same "filename" variable can be reused for many subtests.
#define SELFTEST_DIR_RO "src/selftest-ro"
#define SELFTEST_DIR_RW "src/selftest-rw"

void
testclass_test (bool verbose)
{
    printf (" * testclass: ");

    //  @selftest
    //  Simple create/destroy test
    testclass_t *self = testclass_new ();
    assert (self);
    testclass_destroy (&self);
    //  @end
    printf ("OK\n");
}
