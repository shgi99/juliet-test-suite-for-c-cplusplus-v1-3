/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE78_OS_Command_Injection__wchar_t_file_system_81.h
Label Definition File: CWE78_OS_Command_Injection.one_string.label.xml
Template File: sources-sink-81.tmpl.h
*/
/*
 * @description
 * CWE: 78 OS Command Injection
 * BadSource: file Read input from a file
 * GoodSource: Fixed string
 * Sinks: system
 *    BadSink : Execute command in data using system()
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define FULL_COMMAND L"dir "
#else
#include <unistd.h>
#define FULL_COMMAND L"ls "
#endif

namespace CWE78_OS_Command_Injection__wchar_t_file_system_81
{

class CWE78_OS_Command_Injection__wchar_t_file_system_81_base
{
public:
    /* pure virtual function */
    virtual void action(wchar_t * data) const = 0;
};

#ifndef OMITBAD

class CWE78_OS_Command_Injection__wchar_t_file_system_81_bad : public CWE78_OS_Command_Injection__wchar_t_file_system_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE78_OS_Command_Injection__wchar_t_file_system_81_goodG2B : public CWE78_OS_Command_Injection__wchar_t_file_system_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITGOOD */

}
