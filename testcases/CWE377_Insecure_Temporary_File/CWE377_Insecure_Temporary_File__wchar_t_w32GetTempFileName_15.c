/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_15.c
Label Definition File: CWE377_Insecure_Temporary_File.label.xml
Template File: point-flaw-15.tmpl.c
*/
/*
 * @description
 * CWE: 377 Insecure Temporary File
 * Sinks: w32GetTempFileName
 *    GoodSink: Create and open a temporary file, created with GetTempFileNameW(), more securely
 *    BadSink : Create and open a temporary file, created with GetTempFileNameW(), insecurely
 * Flow Variant: 15 Control flow: switch(6)
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifndef _WIN32
#include <unistd.h>
#endif

#include <windows.h>

#define OPEN _wopen
#define CLOSE _close
#define O_RDWR _O_RDWR
#define O_CREAT _O_CREAT
#define O_EXCL _O_EXCL
#define S_IREAD _S_IREAD
#define S_IWRITE _S_IWRITE

#ifndef OMITBAD

void CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_15_bad()
{
    switch(6)
    {
    case 6:
    {
        wchar_t filename[MAX_PATH] = L"";
        int fileDesc;
        /* FLAW: Passing 0 in for uUnique tells GetTempFileName to create and then close the file,
        * leading to an inescapable race condition when we try to open it again. */
        if (GetTempFileNameW(L".", L"bad", 0, filename) == 0)
        {
            exit(1);
        }
        printWLine(filename);
        /* FLAW: Open a temporary file using open() and flags that do not prevent a race condition */
        fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() changes the switch to switch(5) */
static void good1()
{
    switch(5)
    {
    case 6:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t filename[MAX_PATH] = L"";
        int fileDesc;
        /* FIX: Passing a non-zero value in for uUnique prevents GetTempFileName from creating
         * and then closing the file, at the cost of no longer guaranteeing the name is unique. */
        /* INCIDENTAL CWE338 Weak PRNG - use of rand() as a PRNG */
        if (GetTempFileNameW(L".", L"good", rand() + 1, filename) == 0)
        {
            exit(1);
        }
        printWLine(filename);
        /* FIX: Open a temporary file using open() and the O_CREAT and O_EXCL flags
        * NOTE: This is not a perfect solution, but it is the base case scenario */
        fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
    break;
    }
}

/* good2() reverses the blocks in the switch */
static void good2()
{
    switch(6)
    {
    case 6:
    {
        wchar_t filename[MAX_PATH] = L"";
        int fileDesc;
        /* FIX: Passing a non-zero value in for uUnique prevents GetTempFileName from creating
         * and then closing the file, at the cost of no longer guaranteeing the name is unique. */
        /* INCIDENTAL CWE338 Weak PRNG - use of rand() as a PRNG */
        if (GetTempFileNameW(L".", L"good", rand() + 1, filename) == 0)
        {
            exit(1);
        }
        printWLine(filename);
        /* FIX: Open a temporary file using open() and the O_CREAT and O_EXCL flags
        * NOTE: This is not a perfect solution, but it is the base case scenario */
        fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}

void CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_15_good()
{
    good1();
    good2();
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
    CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_15_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_15_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
