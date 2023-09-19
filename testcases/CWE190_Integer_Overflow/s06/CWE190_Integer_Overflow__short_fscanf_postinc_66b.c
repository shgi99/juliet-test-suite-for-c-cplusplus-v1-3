/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_fscanf_postinc_66b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-66b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 66 Data flow: data passed in an array from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE190_Integer_Overflow__short_fscanf_postinc_66b_badSink(short dataArray[])
{
    /* copy data out of dataArray */
    short data = dataArray[2];
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        short result = data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE190_Integer_Overflow__short_fscanf_postinc_66b_goodG2BSink(short dataArray[])
{
    short data = dataArray[2];
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        short result = data;
        printIntLine(result);
    }
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE190_Integer_Overflow__short_fscanf_postinc_66b_goodB2GSink(short dataArray[])
{
    short data = dataArray[2];
    /* FIX: Add a check to prevent an overflow from occurring */
    if (data < SHRT_MAX)
    {
        data++;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

#endif /* OMITGOOD */
