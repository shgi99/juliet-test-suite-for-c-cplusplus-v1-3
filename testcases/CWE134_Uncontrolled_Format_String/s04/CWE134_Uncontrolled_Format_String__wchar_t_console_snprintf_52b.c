/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52b.c
Label Definition File: CWE134_Uncontrolled_Format_String.label.xml
Template File: sources-sinks-52b.tmpl.c
*/
/*
 * @description
 * CWE: 134 Uncontrolled Format String
 * BadSource: console Read input from the console
 * GoodSource: Copy a fixed string into data
 * Sinks: snprintf
 *    GoodSink: snwprintf with "%s" as the third argument and data as the fourth
 *    BadSink : snwprintf with data as the third argument
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifdef _WIN32
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif

#ifndef OMITBAD

/* bad function declaration */
void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_badSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52b_badSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_goodG2BSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52b_goodG2BSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_goodB2GSink(wchar_t * data);

void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52b_goodB2GSink(wchar_t * data)
{
    CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_52c_goodB2GSink(data);
}

#endif /* OMITGOOD */
