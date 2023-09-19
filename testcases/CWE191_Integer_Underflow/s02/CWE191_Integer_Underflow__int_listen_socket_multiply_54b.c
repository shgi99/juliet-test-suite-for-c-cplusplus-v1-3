/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_listen_socket_multiply_54b.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-54b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: listen_socket Read data using a listen socket (server side)
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* include ws2_32.lib when linking */
#define CLOSE_SOCKET closesocket
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define LISTEN_BACKLOG 5
#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_badSink(int data);

void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_badSink(int data)
{
    CWE191_Integer_Underflow__int_listen_socket_multiply_54c_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodG2BSink(int data);

void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodG2BSink(int data)
{
    CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodB2GSink(int data);

void CWE191_Integer_Underflow__int_listen_socket_multiply_54b_goodB2GSink(int data)
{
    CWE191_Integer_Underflow__int_listen_socket_multiply_54c_goodB2GSink(data);
}

#endif /* OMITGOOD */
