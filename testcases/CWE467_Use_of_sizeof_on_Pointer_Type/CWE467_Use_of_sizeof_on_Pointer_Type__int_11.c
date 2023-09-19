/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE467_Use_of_sizeof_on_Pointer_Type__int_11.c
Label Definition File: CWE467_Use_of_sizeof_on_Pointer_Type.label.xml
Template File: point-flaw-11.tmpl.c
*/
/*
 * @description
 * CWE: 467 Use of sizeof() on a Pointer Type
 * Sinks: int
 *    GoodSink: Use sizeof() the data type
 *    BadSink : Use sizeof() the pointer and not the data type
 * Flow Variant: 11 Control flow: if(globalReturnsTrue()) and if(globalReturnsFalse())
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE467_Use_of_sizeof_on_Pointer_Type__int_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            int * badInt = NULL;
            /* FLAW: Using sizeof the pointer and not the data type in malloc() */
            badInt = (int *)malloc(sizeof(badInt));
            if (badInt == NULL) {exit(-1);}
            *badInt = 5;
            printIntLine(*badInt);
            free(badInt);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(globalReturnsFalse()) instead of if(globalReturnsTrue()) */
static void good1()
{
    if(globalReturnsFalse())
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * goodInt = NULL;
            /* FIX: Using sizeof the data type in malloc() */
            goodInt = (int *)malloc(sizeof(*goodInt));
            if (goodInt == NULL) {exit(-1);}
            *goodInt = 6;
            printIntLine(*goodInt);
            free(goodInt);
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(globalReturnsTrue())
    {
        {
            int * goodInt = NULL;
            /* FIX: Using sizeof the data type in malloc() */
            goodInt = (int *)malloc(sizeof(*goodInt));
            if (goodInt == NULL) {exit(-1);}
            *goodInt = 6;
            printIntLine(*goodInt);
            free(goodInt);
        }
    }
}

void CWE467_Use_of_sizeof_on_Pointer_Type__int_11_good()
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
    CWE467_Use_of_sizeof_on_Pointer_Type__int_11_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE467_Use_of_sizeof_on_Pointer_Type__int_11_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
