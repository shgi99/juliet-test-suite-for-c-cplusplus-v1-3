/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE253_Incorrect_Check_of_Function_Return_Value__w32_RpcImpersonateClient_02.c
Label Definition File: CWE253_Incorrect_Check_of_Function_Return_Value__w32.label.xml
Template File: point-flaw-02.tmpl.c
*/
/*
 * @description
 * CWE: 253 Incorrect Check of Return Value
 * Sinks: RpcImpersonateClient
 *    GoodSink: Correctly check if RpcImpersonateClient() fails
 *    BadSink : Incorrectly check if RpcImpersonateClient() fails
 * Flow Variant: 02 Control flow: if(1) and if(0)
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#include <rpcdce.h>
#pragma comment(lib, "rpcrt4")

#ifndef OMITBAD

void CWE253_Incorrect_Check_of_Function_Return_Value__w32_RpcImpersonateClient_02_bad()
{
    if(1)
    {
        /* FLAW: RpcImpersonateClient() could fail and would not return RPC_S_OK, but we
         * are failing if the return value is RPC_S_OK */
        if (RpcImpersonateClient(0) == RPC_S_OK)
        {
            exit(1);
        }
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(0) instead of if(1) */
static void good1()
{
    if(0)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: check for the correct return value */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(1)
    {
        /* FIX: check for the correct return value */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}

void CWE253_Incorrect_Check_of_Function_Return_Value__w32_RpcImpersonateClient_02_good()
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
    CWE253_Incorrect_Check_of_Function_Return_Value__w32_RpcImpersonateClient_02_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE253_Incorrect_Check_of_Function_Return_Value__w32_RpcImpersonateClient_02_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
