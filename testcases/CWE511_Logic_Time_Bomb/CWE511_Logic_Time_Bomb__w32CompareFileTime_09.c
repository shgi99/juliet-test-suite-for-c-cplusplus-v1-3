/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE511_Logic_Time_Bomb__w32CompareFileTime_09.c
Label Definition File: CWE511_Logic_Time_Bomb.label.xml
Template File: point-flaw-09.tmpl.c
*/
/*
 * @description
 * CWE: 511 Logic Time Bomb
 * Sinks: w32CompareFileTime
 *    GoodSink: After a certain date, do something harmless
 *    BadSink : After a certain date, do something bad
 * Flow Variant: 09 Control flow: if(GLOBAL_CONST_TRUE) and if(GLOBAL_CONST_FALSE)
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define UNLINK _unlink
#else
#include <unistd.h>
#define UNLINK unlink
#endif

#include <windows.h>

#ifndef OMITBAD

void CWE511_Logic_Time_Bomb__w32CompareFileTime_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            SYSTEMTIME setTime, currentTime;
            FILETIME setTimeAsFileTime, currentTimeAsFileTime;
            /* Jan 1, 2008 12:00:00 PM */
            setTime.wYear         = 2008; /* Year */
            setTime.wMonth        = 1;    /* January */
            setTime.wDayOfWeek    = 0;    /* Ignored */
            setTime.wDay          = 1;    /* The first of the month */
            setTime.wHour         = 12;   /* 12 PM */
            setTime.wMinute       = 0;    /* 0 minutes into the hour */
            setTime.wSecond       = 0;    /* 0 seconds into the minute */
            setTime.wMilliseconds = 0;    /* 0 milliseconds into the second */
            GetSystemTime(&currentTime);
            /* Must convert to FILETIME for comparison */
            SystemTimeToFileTime(&currentTime, &currentTimeAsFileTime);
            SystemTimeToFileTime(&setTime, &setTimeAsFileTime);
            /* FLAW: After a certain date, delete a file */
            if (CompareFileTime(&currentTimeAsFileTime, &setTimeAsFileTime) == 1)
            {
                UNLINK("important_file.txt");
            }
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(GLOBAL_CONST_FALSE) instead of if(GLOBAL_CONST_TRUE) */
static void good1()
{
    if(GLOBAL_CONST_FALSE)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            SYSTEMTIME setTime, currentTime;
            FILETIME setTimeAsFileTime, currentTimeAsFileTime;
            /* Jan 1, 2008 12:00:00 PM */
            setTime.wYear         = 2008; /* Year */
            setTime.wMonth        = 1;    /* January */
            setTime.wDayOfWeek    = 0;    /* Ignored */
            setTime.wDay          = 1;    /* The first of the month */
            setTime.wHour         = 12;   /* 12 PM */
            setTime.wMinute       = 0;    /* 0 minutes into the hour */
            setTime.wSecond       = 0;    /* 0 seconds into the minute */
            setTime.wMilliseconds = 0;    /* 0 milliseconds into the second */
            GetSystemTime(&currentTime);
            /* Must convert to FILETIME for comparison */
            SystemTimeToFileTime(&currentTime, &currentTimeAsFileTime);
            SystemTimeToFileTime(&setTime, &setTimeAsFileTime);
            /* FIX: After a certain date, print to the console */
            if (CompareFileTime(&currentTimeAsFileTime, &setTimeAsFileTime) == 1)
            {
                printLine("Happy New Year!");
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            SYSTEMTIME setTime, currentTime;
            FILETIME setTimeAsFileTime, currentTimeAsFileTime;
            /* Jan 1, 2008 12:00:00 PM */
            setTime.wYear         = 2008; /* Year */
            setTime.wMonth        = 1;    /* January */
            setTime.wDayOfWeek    = 0;    /* Ignored */
            setTime.wDay          = 1;    /* The first of the month */
            setTime.wHour         = 12;   /* 12 PM */
            setTime.wMinute       = 0;    /* 0 minutes into the hour */
            setTime.wSecond       = 0;    /* 0 seconds into the minute */
            setTime.wMilliseconds = 0;    /* 0 milliseconds into the second */
            GetSystemTime(&currentTime);
            /* Must convert to FILETIME for comparison */
            SystemTimeToFileTime(&currentTime, &currentTimeAsFileTime);
            SystemTimeToFileTime(&setTime, &setTimeAsFileTime);
            /* FIX: After a certain date, print to the console */
            if (CompareFileTime(&currentTimeAsFileTime, &setTimeAsFileTime) == 1)
            {
                printLine("Happy New Year!");
            }
        }
    }
}

void CWE511_Logic_Time_Bomb__w32CompareFileTime_09_good()
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
    CWE511_Logic_Time_Bomb__w32CompareFileTime_09_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE511_Logic_Time_Bomb__w32CompareFileTime_09_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
