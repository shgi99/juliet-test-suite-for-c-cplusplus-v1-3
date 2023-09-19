/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_81_bad.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_src.label.xml
Template File: sources-sink-81_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize data as a large string
 * GoodSource: Initialize data as a small string
 * Sinks: cat
 *    BadSink : Copy data to string using wcscat
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_81.h"

namespace CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_81
{

void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_81_bad::action(wchar_t * data) const
{
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcscat(dest, data);
        printWLine(data);
        free(data);
    }
}

}
#endif /* OMITBAD */
