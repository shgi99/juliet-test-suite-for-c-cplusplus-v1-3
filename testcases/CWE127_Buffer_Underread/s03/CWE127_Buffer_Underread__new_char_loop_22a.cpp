/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE127_Buffer_Underread__new_char_loop_22a.cpp
Label Definition File: CWE127_Buffer_Underread__new.label.xml
Template File: sources-sink-22a.tmpl.cpp
*/
/*
 * @description
 * CWE: 127 Buffer Under-read
 * BadSource:  Set data pointer to before the allocated memory buffer
 * GoodSource: Set data pointer to the allocated memory buffer
 * Sink: loop
 *    BadSink : Copy data to string using a loop
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE127_Buffer_Underread__new_char_loop_22
{

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the source function. Since it is in
a C++ namespace, it doesn't need a globally unique name. */
int badGlobal = 0;

char * badSource(char * data);

void bad()
{
    char * data;
    data = NULL;
    badGlobal = 1; /* true */
    data = badSource(data);
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); /* fill with 'C's */
        dest[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        /* Ensure null termination */
        dest[100-1] = '\0';
        printLine(dest);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by new [] so can't safely call delete [] on it */
    }
    ;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the source functions. Since they are in
a C++ namespace, they don't need globally unique names. */
int goodG2B1Global = 0;
int goodG2B2Global = 0;

/* goodG2B1() - use goodsource and badsink by setting the global variable to false instead of true */
char * goodG2B1Source(char * data);

static void goodG2B1()
{
    char * data;
    data = NULL;
    goodG2B1Global = 0; /* false */
    data = goodG2B1Source(data);
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); /* fill with 'C's */
        dest[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        /* Ensure null termination */
        dest[100-1] = '\0';
        printLine(dest);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by new [] so can't safely call delete [] on it */
    }
    ;
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the if in the source function */
char * goodG2B2Source(char * data);

static void goodG2B2()
{
    char * data;
    data = NULL;
    goodG2B2Global = 1; /* true */
    data = goodG2B2Source(data);
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); /* fill with 'C's */
        dest[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        /* Ensure null termination */
        dest[100-1] = '\0';
        printLine(dest);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by new [] so can't safely call delete [] on it */
    }
    ;
}

void good()
{
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

using namespace CWE127_Buffer_Underread__new_char_loop_22; /* so that we can use good and bad easily */

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
