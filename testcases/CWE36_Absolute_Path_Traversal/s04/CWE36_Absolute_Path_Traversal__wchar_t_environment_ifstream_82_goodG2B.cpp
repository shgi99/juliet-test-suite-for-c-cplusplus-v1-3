/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE36_Absolute_Path_Traversal__wchar_t_environment_ifstream_82_goodG2B.cpp
Label Definition File: CWE36_Absolute_Path_Traversal.label.xml
Template File: sources-sink-82_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 36 Absolute Path Traversal
 * BadSource: environment Read input from an environment variable
 * GoodSource: Full path and file name
 * Sinks: ifstream
 *    BadSink : Open the file named in data using ifstream::open()
 * Flow Variant: 82 Data flow: data passed in a parameter to a virtual method called via a pointer
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE36_Absolute_Path_Traversal__wchar_t_environment_ifstream_82.h"

#include <fstream>
using namespace std;

namespace CWE36_Absolute_Path_Traversal__wchar_t_environment_ifstream_82
{

void CWE36_Absolute_Path_Traversal__wchar_t_environment_ifstream_82_goodG2B::action(wchar_t * data)
{
    {
        ifstream inputFile;
        /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
        inputFile.open((char *)data);
        inputFile.close();
    }
}

}
#endif /* OMITGOOD */
