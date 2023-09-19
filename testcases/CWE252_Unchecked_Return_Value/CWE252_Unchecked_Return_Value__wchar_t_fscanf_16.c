/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE252_Unchecked_Return_Value__wchar_t_fscanf_16.c
Label Definition File: CWE252_Unchecked_Return_Value.label.xml
Template File: point-flaw-16.tmpl.c
*/
/*
 * @description
 * CWE: 252 Unchecked Return Value
 * Sinks: fscanf
 *    GoodSink: Check if fwscanf() fails
 *    BadSink : Do not check if fwscanf() fails
 * Flow Variant: 16 Control flow: while(1)
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITBAD

void CWE252_Unchecked_Return_Value__wchar_t_fscanf_16_bad()
{
    while(1)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: Do not check the return value */
            fwscanf(stdin, L"%99s\0", data);
        }
        break;
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses the GoodSinkBody in the while loop */
static void good1()
{
    while(1)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FIX: check the return value */
            if (fwscanf(stdin, L"%99s\0", data) == EOF)
            {
                printLine("fwscanf failed!");
            }
        }
        break;
    }
}

void CWE252_Unchecked_Return_Value__wchar_t_fscanf_16_good()
{
    good1();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE252_Unchecked_Return_Value__wchar_t_fscanf_16_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE252_Unchecked_Return_Value__wchar_t_fscanf_16_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
