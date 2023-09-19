/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52b.c
Label Definition File: CWE427_Uncontrolled_Search_Path_Element.label.xml
Template File: sources-sink-52b.tmpl.c
*/
/*
 * @description
 * CWE: 427 Uncontrolled Search Path Element
 * BadSource: environment Read input from an environment variable
 * GoodSource: Use a hardcoded path
 * Sink:
 *    BadSink : Set the environment variable
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define NEW_PATH L"%SystemRoot%\\system32"
#define PUTENV _wputenv
#else
#define NEW_PATH L"/bin"
#define PUTENV putenv
#endif

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

/* all the sinks are the same, we just want to know where the hit originated if a tool flags one */

#ifndef OMITBAD

/* bad function declaration */
void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_badSink(wchar_t * data);

void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52b_badSink(wchar_t * data)
{
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good function declaration */
void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_goodG2BSink(wchar_t * data);

/* goodG2B uses the GoodSource with the BadSink */
void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52b_goodG2BSink(wchar_t * data)
{
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_goodG2BSink(data);
}

#endif /* OMITGOOD */
