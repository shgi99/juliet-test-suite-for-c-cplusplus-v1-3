/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__new_wchar_t_73a.cpp
Label Definition File: CWE401_Memory_Leak__new.label.xml
Template File: sources-sinks-73a.tmpl.cpp
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource:  Allocate data using new
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call delete on data
 *    BadSink : no deallocation of data
 * Flow Variant: 73 Data flow: data passed in a list from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <list>

#ifndef _WIN32
#include <wchar.h>
#endif

using namespace std;

namespace CWE401_Memory_Leak__new_wchar_t_73
{

#ifndef OMITBAD

/* bad function declaration */
void badSink(list<wchar_t *> dataList);

void bad()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = new wchar_t;
    /* Initialize and make use of data */
    *data = L'A';
    printHexCharLine((char)*data);
    /* Put data in a list */
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    badSink(dataList);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void goodG2BSink(list<wchar_t *> dataList);

static void goodG2B()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    /* FIX: Use memory allocated on the stack */
    wchar_t dataGoodBuffer;
    data = &dataGoodBuffer;
    /* Initialize and make use of data */
    *data = L'A';
    printHexCharLine((char)*data);
    /* Put data in a list */
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    goodG2BSink(dataList);
}

/* goodB2G uses the BadSource with the GoodSink */
void goodB2GSink(list<wchar_t *> dataList);

static void goodB2G()
{
    wchar_t * data;
    list<wchar_t *> dataList;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = new wchar_t;
    /* Initialize and make use of data */
    *data = L'A';
    printHexCharLine((char)*data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    goodB2GSink(dataList);
}

void good()
{
    goodG2B();
    goodB2G();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE401_Memory_Leak__new_wchar_t_73; /* so that we can use good and bad easily */

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
