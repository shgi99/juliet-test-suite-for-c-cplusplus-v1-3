/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE400_Resource_Exhaustion__rand_for_loop_62b.cpp
Label Definition File: CWE400_Resource_Exhaustion.label.xml
Template File: sources-sinks-62b.tmpl.cpp
*/
/*
 * @description
 * CWE: 400 Resource Exhaustion
 * BadSource: rand Set data to result of rand(), which may be zero
 * GoodSource: Assign count to be a relatively small number
 * Sinks: for_loop
 *    GoodSink: Validate count before using it as the loop variant in a for loop
 *    BadSink : Use count as the loop variant in a for loop
 * Flow Variant: 62 Data flow: data flows using a C++ reference from one function to another in different source files
 *
 * */

#include "std_testcase.h"

namespace CWE400_Resource_Exhaustion__rand_for_loop_62
{

#ifndef OMITBAD

void badSource(int &count)
{
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
void goodG2BSource(int &count)
{
    /* FIX: Use a relatively small number */
    count = 20;
}

/* goodB2G() uses the BadSource with the GoodSink */
void goodB2GSource(int &count)
{
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
}

#endif /* OMITGOOD */

} /* close namespace */
