/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE427_Uncontrolled_Search_Path_Element__char_file_22b.c
Label Definition File: CWE427_Uncontrolled_Search_Path_Element.label.xml
Template File: sources-sink-22b.tmpl.c
*/
/*
 * @description
 * CWE: 427 Uncontrolled Search Path Element
 * BadSource: file Read input from a file
 * GoodSource: Use a hardcoded path
 * Sink:
 *    BadSink : Set the environment variable
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define NEW_PATH "%SystemRoot%\\system32"
#define PUTENV _putenv
#else
#define NEW_PATH "/bin"
#define PUTENV putenv
#endif

#ifdef _WIN32
#define FILENAME "C:\\temp\\file.txt"
#else
#define FILENAME "/tmp/file.txt"
#endif

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the source function */
extern int CWE427_Uncontrolled_Search_Path_Element__char_file_22_badGlobal;

char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_badSource(char * data)
{
    if(CWE427_Uncontrolled_Search_Path_Element__char_file_22_badGlobal)
    {
        {
            /* Read input from a file */
            size_t dataLen = strlen(data);
            FILE * pFile;
            /* if there is room in data, attempt to read the input from a file */
            if (250-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    /* POTENTIAL FLAW: Read data from a file */
                    if (fgets(data+dataLen, (int)(250-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        /* Restore NUL terminator if fgets fails */
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    return data;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the source functions. */
extern int CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Global;
extern int CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Global;

/* goodG2B1() - use goodsource and badsink by setting the static variable to false instead of true */
char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Source(char * data)
{
    if(CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Global)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Set the path as the "system" path */
        strcat(data, NEW_PATH);
    }
    return data;
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the if in the source function */
char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Source(char * data)
{
    if(CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Global)
    {
        /* FIX: Set the path as the "system" path */
        strcat(data, NEW_PATH);
    }
    return data;
}

#endif /* OMITGOOD */
