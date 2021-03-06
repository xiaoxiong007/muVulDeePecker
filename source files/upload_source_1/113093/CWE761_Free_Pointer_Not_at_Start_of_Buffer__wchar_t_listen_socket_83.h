/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83.h
Label Definition File: CWE761_Free_Pointer_Not_at_Start_of_Buffer.label.xml
Template File: source-sinks-83.tmpl.h
*/
/*
 * @description
 * CWE: 761 Free Pointer not at Start of Buffer
 * BadSource: listen_socket Read data using a listen socket (server side)
 * Sinks:
 *    GoodSink: free() memory correctly at the start of the buffer
 *    BadSink : free() memory not at the start of the buffer
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83
{

#ifndef OMITBAD

class CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_bad
{
public:
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_bad(wchar_t * dataCopy);
    ~CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_bad();

private:
    wchar_t * data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_goodB2G
{
public:
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_goodB2G(wchar_t * dataCopy);
    ~CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_83_goodB2G();

private:
    wchar_t * data;
};

#endif /* OMITGOOD */

}
