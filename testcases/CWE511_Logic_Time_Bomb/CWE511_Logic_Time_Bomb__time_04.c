/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE511_Logic_Time_Bomb__time_04.c
Label Definition File: CWE511_Logic_Time_Bomb.label.xml
Template File: point-flaw-04.tmpl.c
*/
/*
 * @description
 * CWE: 511 Logic Time Bomb
 * Sinks: time
 *    GoodSink: After a certain date, do something harmless
 *    BadSink : After a certain date, do something bad
 * Flow Variant: 04 Control flow: if(STATIC_CONST_TRUE) and if(STATIC_CONST_FALSE)
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define UNLINK _unlink
#else
#include <unistd.h>
#define UNLINK unlink
#endif

#include <time.h>

#define TIME_CHECK ((time_t)1199163600) /* Jan 1, 2008 12:00:00 AM */

/* The two variables below are declared "const", so a tool should
   be able to identify that reads of these will always return their
   initialized values. */
static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

#ifndef OMITBAD

void CWE511_Logic_Time_Bomb__time_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        {
            time_t currentTime;
            /* FLAW: After a certain date, delete a file */
            time(&currentTime);
            if (currentTime > TIME_CHECK)
            {
                UNLINK("important_file.txt");
            }
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(STATIC_CONST_FALSE) instead of if(STATIC_CONST_TRUE) */
static void good1()
{
    if(STATIC_CONST_FALSE)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            time_t currentTime;
            /* FIX: After a certain date, print to the console */
            time(&currentTime);
            if (currentTime > TIME_CHECK)
            {
                printLine("Happy New Year!");
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(STATIC_CONST_TRUE)
    {
        {
            time_t currentTime;
            /* FIX: After a certain date, print to the console */
            time(&currentTime);
            if (currentTime > TIME_CHECK)
            {
                printLine("Happy New Year!");
            }
        }
    }
}

void CWE511_Logic_Time_Bomb__time_04_good()
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
    CWE511_Logic_Time_Bomb__time_04_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE511_Logic_Time_Bomb__time_04_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
