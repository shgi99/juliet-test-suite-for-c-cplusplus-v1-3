/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE126_Buffer_Overread__new_char_loop_81.h
Label Definition File: CWE126_Buffer_Overread__new.label.xml
Template File: sources-sink-81.tmpl.h
*/
/*
 * @description
 * CWE: 126 Buffer Over-read
 * BadSource:  Use a small buffer
 * GoodSource: Use a large buffer
 * Sinks: loop
 *    BadSink : Copy data to string using a loop
 * Flow Variant: 81 Data flow: data passed in a parameter to a virtual method called via a reference
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE126_Buffer_Overread__new_char_loop_81
{

class CWE126_Buffer_Overread__new_char_loop_81_base
{
public:
    /* pure virtual function */
    virtual void action(char * data) const = 0;
};

#ifndef OMITBAD

class CWE126_Buffer_Overread__new_char_loop_81_bad : public CWE126_Buffer_Overread__new_char_loop_81_base
{
public:
    void action(char * data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE126_Buffer_Overread__new_char_loop_81_goodG2B : public CWE126_Buffer_Overread__new_char_loop_81_base
{
public:
    void action(char * data) const;
};

#endif /* OMITGOOD */

}
