/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE188_Reliance_on_Data_Memory_Layout__modify_local_08.c
Label Definition File: CWE188_Reliance_on_Data_Memory_Layout.label.xml
Template File: point-flaw-08.tmpl.c
*/
/*
 * @description
 * CWE: 188 Reliance on Data Memory Layout
 * Sinks: modify_local
 *    GoodSink: Modify the second field of the struct using the field name
 *    BadSink : Attempt to modify second field in struct, assuming the first field is an int
 * Flow Variant: 08 Control flow: if(staticReturnsTrue()) and if(staticReturnsFalse())
 *
 * */

#include "std_testcase.h"

/* The two function below always return the same value, so a tool
   should be able to identify that calls to the functions will always
   return a fixed value. */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITBAD

void CWE188_Reliance_on_Data_Memory_Layout__modify_local_08_bad()
{
    if(staticReturnsTrue())
    {
        {
            struct
            {
                char charFirst;
                int intSecond;
            } structCharInt;
            char *charPtr;
            structCharInt.charFirst = 1;
            charPtr = &structCharInt.charFirst;
            /* FLAW: Attempt to modify intSecond assuming intSecond comes after charFirst and
             * is aligned on an int-boundary after charFirst */
            *(int*)(charPtr + sizeof(int)) = 5;
            printIntLine(structCharInt.charFirst);
            printIntLine(structCharInt.intSecond);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(staticReturnsFalse()) instead of if(staticReturnsTrue()) */
static void good1()
{
    if(staticReturnsFalse())
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            struct
            {
                char charFirst;
                int intSecond;
            } structCharInt;
            structCharInt.charFirst = 1;
            /* FIX: Do not make unwarranted assumptions about underlying data model
             * Modify and access data appropriately */
            structCharInt.intSecond = 5;
            printIntLine(structCharInt.charFirst);
            printIntLine(structCharInt.intSecond);
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(staticReturnsTrue())
    {
        {
            struct
            {
                char charFirst;
                int intSecond;
            } structCharInt;
            structCharInt.charFirst = 1;
            /* FIX: Do not make unwarranted assumptions about underlying data model
             * Modify and access data appropriately */
            structCharInt.intSecond = 5;
            printIntLine(structCharInt.charFirst);
            printIntLine(structCharInt.intSecond);
        }
    }
}

void CWE188_Reliance_on_Data_Memory_Layout__modify_local_08_good()
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
    CWE188_Reliance_on_Data_Memory_Layout__modify_local_08_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE188_Reliance_on_Data_Memory_Layout__modify_local_08_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
