/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_pointer_buf_01_good();");
	CWE562_Return_of_Stack_Variable_Address__return_pointer_buf_01_good();

	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_buf_01_good();");
	CWE562_Return_of_Stack_Variable_Address__return_buf_01_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_local_class_member_01::good();");
	CWE562_Return_of_Stack_Variable_Address__return_local_class_member_01::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_pointer_buf_01_bad();");
	CWE562_Return_of_Stack_Variable_Address__return_pointer_buf_01_bad();

	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_buf_01_bad();");
	CWE562_Return_of_Stack_Variable_Address__return_buf_01_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE562_Return_of_Stack_Variable_Address__return_local_class_member_01::bad();");
	CWE562_Return_of_Stack_Variable_Address__return_local_class_member_01::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
