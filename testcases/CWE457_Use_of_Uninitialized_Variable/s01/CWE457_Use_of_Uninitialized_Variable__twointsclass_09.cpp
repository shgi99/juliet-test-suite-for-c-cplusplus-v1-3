/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE457_Use_of_Uninitialized_Variable__twointsclass_09.cpp
Label Definition File: CWE457_Use_of_Uninitialized_Variable__twointsclass.label.xml
Template File: sources-sinks-09.tmpl.cpp
*/
/*
 * @description
 * CWE: 457 Use of Uninitialized Variable
 * BadSource:  Don't initialize data
 * GoodSource: Initialize data
 * Sinks:
 *    GoodSink: Initialize then use data
 *    BadSink : Use data
 * Flow Variant: 09 Control flow: if(GLOBAL_CONST_TRUE) and if(GLOBAL_CONST_FALSE)
 *
 * */

#include "std_testcase.h"

namespace CWE457_Use_of_Uninitialized_Variable__twointsclass_09
{

#ifndef OMITBAD

void bad()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodB2G1() - use badsource and goodsink by changing the second GLOBAL_CONST_TRUE to GLOBAL_CONST_FALSE */
static void goodB2G1()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(GLOBAL_CONST_FALSE)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Ensure data is initialized before use */
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* goodB2G2() - use badsource and goodsink by reversing the blocks in the second if */
static void goodB2G2()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* FIX: Ensure data is initialized before use */
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* goodG2B1() - use goodsource and badsink by changing the first GLOBAL_CONST_TRUE to GLOBAL_CONST_FALSE */
static void goodG2B1()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_FALSE)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Initialize data */
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the first if */
static void goodG2B2()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        /* FIX: Initialize data */
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

void good()
{
    goodB2G1();
    goodB2G2();
    goodG2B1();
    goodG2B2();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE457_Use_of_Uninitialized_Variable__twointsclass_09; /* so that we can use good and bad easily */

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
