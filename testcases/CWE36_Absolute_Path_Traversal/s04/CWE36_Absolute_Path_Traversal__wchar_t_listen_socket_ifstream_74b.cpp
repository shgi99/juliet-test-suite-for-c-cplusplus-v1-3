/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_74b.cpp
Label Definition File: CWE36_Absolute_Path_Traversal.label.xml
Template File: sources-sink-74b.tmpl.cpp
*/
/*
 * @description
 * CWE: 36 Absolute Path Traversal
 * BadSource: listen_socket Read data using a listen socket (server side)
 * GoodSource: Full path and file name
 * Sinks: ifstream
 *    BadSink : Open the file named in data using ifstream::open()
 * Flow Variant: 74 Data flow: data passed in a map from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <map>

#ifndef _WIN32
#include <wchar.h>
#endif

#include <fstream>
using namespace std;

using namespace std;

namespace CWE36_Absolute_Path_Traversal__wchar_t_listen_socket_ifstream_74
{

#ifndef OMITBAD

void badSink(map<int, wchar_t *> dataMap)
{
    /* copy data out of dataMap */
    wchar_t * data = dataMap[2];
    {
        ifstream inputFile;
        /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
        inputFile.open((char *)data);
        inputFile.close();
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void goodG2BSink(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    {
        ifstream inputFile;
        /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
        inputFile.open((char *)data);
        inputFile.close();
    }
}

#endif /* OMITGOOD */

} /* close namespace */
