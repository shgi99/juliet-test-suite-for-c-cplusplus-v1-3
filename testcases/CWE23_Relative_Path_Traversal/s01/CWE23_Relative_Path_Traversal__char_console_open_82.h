/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE23_Relative_Path_Traversal__char_console_open_82.h
Label Definition File: CWE23_Relative_Path_Traversal.label.xml
Template File: sources-sink-82.tmpl.h
*/
/*
 * @description
 * CWE: 23 Relative Path Traversal
 * BadSource: console Read input from the console
 * GoodSource: Use a fixed file name
 * Sinks: open
 *    BadSink : Open the file named in data using open()
 * Flow Variant: 82 Data flow: data passed in a parameter to a virtual method called via a pointer
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define BASEPATH "c:\\temp\\"
#else
#include <wchar.h>
#define BASEPATH "/tmp/"
#endif

namespace CWE23_Relative_Path_Traversal__char_console_open_82
{

class CWE23_Relative_Path_Traversal__char_console_open_82_base
{
public:
    /* pure virtual function */
    virtual void action(char * data) = 0;
};

#ifndef OMITBAD

class CWE23_Relative_Path_Traversal__char_console_open_82_bad : public CWE23_Relative_Path_Traversal__char_console_open_82_base
{
public:
    void action(char * data);
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE23_Relative_Path_Traversal__char_console_open_82_goodG2B : public CWE23_Relative_Path_Traversal__char_console_open_82_base
{
public:
    void action(char * data);
};

#endif /* OMITGOOD */

}
