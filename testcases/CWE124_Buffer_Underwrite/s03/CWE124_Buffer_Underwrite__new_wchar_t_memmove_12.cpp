/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE124_Buffer_Underwrite__new_wchar_t_memmove_12.cpp
Label Definition File: CWE124_Buffer_Underwrite__new.label.xml
Template File: sources-sink-12.tmpl.cpp
*/
/*
 * @description
 * CWE: 124 Buffer Underwrite
 * BadSource:  Set data pointer to before the allocated memory buffer
 * GoodSource: Set data pointer to the allocated memory buffer
 * Sink: memmove
 *    BadSink : Copy string to data using memmove
 * Flow Variant: 12 Control flow: if(globalReturnsTrueOrFalse())
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE124_Buffer_Underwrite__new_wchar_t_memmove_12
{

#ifndef OMITBAD

void bad()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            /* FLAW: Set data pointer to before the allocated memory buffer */
            data = dataBuffer - 8;
        }
    }
    else
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            /* FIX: Set data pointer to the allocated memory buffer */
            data = dataBuffer;
        }
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with 'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
        memmove(data, source, 100*sizeof(wchar_t));
        /* Ensure the destination buffer is null terminated */
        data[100-1] = L'\0';
        printWLine(data);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by new [] so can't safely call delete [] on it */
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() - use goodsource and badsink by changing the "if" so that
   both branches use the GoodSource */
static void goodG2B()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            /* FIX: Set data pointer to the allocated memory buffer */
            data = dataBuffer;
        }
    }
    else
    {
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            /* FIX: Set data pointer to the allocated memory buffer */
            data = dataBuffer;
        }
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with 'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
        memmove(data, source, 100*sizeof(wchar_t));
        /* Ensure the destination buffer is null terminated */
        data[100-1] = L'\0';
        printWLine(data);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by new [] so can't safely call delete [] on it */
    }
}

void good()
{
    goodG2B();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE124_Buffer_Underwrite__new_wchar_t_memmove_12; /* so that we can use good and bad easily */

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
