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
	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_12_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_12_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_07_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_07_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_17_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_17_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_09_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_09_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_04_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_04_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_03_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_03_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_18_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_18_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_02_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_02_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_15_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_15_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_13_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_13_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_05_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_05_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_01_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_01_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_11_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_11_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_14_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_14_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_10_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_10_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_08_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_08_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_16_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_16_good();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_06_good();");
	CWE482_Comparing_Instead_of_Assigning__basic_06_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_12_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_12_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_07_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_07_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_17_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_17_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_09_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_09_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_04_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_04_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_03_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_03_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_18_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_18_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_02_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_02_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_15_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_15_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_13_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_13_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_05_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_05_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_01_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_01_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_11_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_11_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_14_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_14_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_10_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_10_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_08_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_08_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_16_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_16_bad();

	printLine("Calling CWE482_Comparing_Instead_of_Assigning__basic_06_bad();");
	CWE482_Comparing_Instead_of_Assigning__basic_06_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
