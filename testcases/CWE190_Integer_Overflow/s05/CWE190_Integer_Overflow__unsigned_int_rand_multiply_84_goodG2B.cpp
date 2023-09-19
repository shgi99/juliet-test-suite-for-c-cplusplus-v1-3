/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__unsigned_int_rand_multiply_84_goodG2B.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-84_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an overflow before multiplying data by 2
 *    BadSink : If data is positive, multiply by 2, which can cause an overflow
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE190_Integer_Overflow__unsigned_int_rand_multiply_84.h"

namespace CWE190_Integer_Overflow__unsigned_int_rand_multiply_84
{
CWE190_Integer_Overflow__unsigned_int_rand_multiply_84_goodG2B::CWE190_Integer_Overflow__unsigned_int_rand_multiply_84_goodG2B(unsigned int dataCopy)
{
    data = dataCopy;
    /* FIX: Use a small, non-zero value that will not cause an overflow in the sinks */
    data = 2;
}

CWE190_Integer_Overflow__unsigned_int_rand_multiply_84_goodG2B::~CWE190_Integer_Overflow__unsigned_int_rand_multiply_84_goodG2B()
{
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
}
#endif /* OMITGOOD */
