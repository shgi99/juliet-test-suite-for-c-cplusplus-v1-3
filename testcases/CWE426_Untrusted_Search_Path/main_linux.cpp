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
	printLine("Calling CWE426_Untrusted_Search_Path__char_system_44_good();");
	CWE426_Untrusted_Search_Path__char_system_44_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_68_good();");
	CWE426_Untrusted_Search_Path__char_popen_68_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_15_good();");
	CWE426_Untrusted_Search_Path__char_popen_15_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_21_good();");
	CWE426_Untrusted_Search_Path__char_popen_21_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_08_good();");
	CWE426_Untrusted_Search_Path__char_system_08_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_09_good();");
	CWE426_Untrusted_Search_Path__char_popen_09_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_03_good();");
	CWE426_Untrusted_Search_Path__char_system_03_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_09_good();");
	CWE426_Untrusted_Search_Path__char_system_09_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_01_good();");
	CWE426_Untrusted_Search_Path__char_system_01_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_61_good();");
	CWE426_Untrusted_Search_Path__char_system_61_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_67_good();");
	CWE426_Untrusted_Search_Path__char_system_67_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_07_good();");
	CWE426_Untrusted_Search_Path__char_popen_07_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_22_good();");
	CWE426_Untrusted_Search_Path__char_system_22_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_07_good();");
	CWE426_Untrusted_Search_Path__char_system_07_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_11_good();");
	CWE426_Untrusted_Search_Path__char_system_11_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_15_good();");
	CWE426_Untrusted_Search_Path__char_system_15_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_05_good();");
	CWE426_Untrusted_Search_Path__char_popen_05_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_31_good();");
	CWE426_Untrusted_Search_Path__char_popen_31_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_04_good();");
	CWE426_Untrusted_Search_Path__char_system_04_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_61_good();");
	CWE426_Untrusted_Search_Path__char_popen_61_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_18_good();");
	CWE426_Untrusted_Search_Path__char_system_18_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_02_good();");
	CWE426_Untrusted_Search_Path__char_popen_02_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_11_good();");
	CWE426_Untrusted_Search_Path__char_popen_11_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_32_good();");
	CWE426_Untrusted_Search_Path__char_popen_32_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_53_good();");
	CWE426_Untrusted_Search_Path__char_system_53_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_12_good();");
	CWE426_Untrusted_Search_Path__char_popen_12_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_18_good();");
	CWE426_Untrusted_Search_Path__char_popen_18_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_06_good();");
	CWE426_Untrusted_Search_Path__char_system_06_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_05_good();");
	CWE426_Untrusted_Search_Path__char_system_05_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_08_good();");
	CWE426_Untrusted_Search_Path__char_popen_08_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_34_good();");
	CWE426_Untrusted_Search_Path__char_popen_34_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_42_good();");
	CWE426_Untrusted_Search_Path__char_popen_42_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_54_good();");
	CWE426_Untrusted_Search_Path__char_system_54_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_53_good();");
	CWE426_Untrusted_Search_Path__char_popen_53_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_42_good();");
	CWE426_Untrusted_Search_Path__char_system_42_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_64_good();");
	CWE426_Untrusted_Search_Path__char_system_64_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_14_good();");
	CWE426_Untrusted_Search_Path__char_popen_14_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_21_good();");
	CWE426_Untrusted_Search_Path__char_system_21_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_16_good();");
	CWE426_Untrusted_Search_Path__char_popen_16_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_66_good();");
	CWE426_Untrusted_Search_Path__char_popen_66_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_65_good();");
	CWE426_Untrusted_Search_Path__char_popen_65_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_65_good();");
	CWE426_Untrusted_Search_Path__char_system_65_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_04_good();");
	CWE426_Untrusted_Search_Path__char_popen_04_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_12_good();");
	CWE426_Untrusted_Search_Path__char_system_12_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_41_good();");
	CWE426_Untrusted_Search_Path__char_popen_41_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_13_good();");
	CWE426_Untrusted_Search_Path__char_popen_13_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_17_good();");
	CWE426_Untrusted_Search_Path__char_popen_17_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_17_good();");
	CWE426_Untrusted_Search_Path__char_system_17_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_67_good();");
	CWE426_Untrusted_Search_Path__char_popen_67_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_10_good();");
	CWE426_Untrusted_Search_Path__char_popen_10_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_52_good();");
	CWE426_Untrusted_Search_Path__char_system_52_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_45_good();");
	CWE426_Untrusted_Search_Path__char_popen_45_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_44_good();");
	CWE426_Untrusted_Search_Path__char_popen_44_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_64_good();");
	CWE426_Untrusted_Search_Path__char_popen_64_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_45_good();");
	CWE426_Untrusted_Search_Path__char_system_45_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_22_good();");
	CWE426_Untrusted_Search_Path__char_popen_22_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_34_good();");
	CWE426_Untrusted_Search_Path__char_system_34_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_66_good();");
	CWE426_Untrusted_Search_Path__char_system_66_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_63_good();");
	CWE426_Untrusted_Search_Path__char_popen_63_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_68_good();");
	CWE426_Untrusted_Search_Path__char_system_68_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_02_good();");
	CWE426_Untrusted_Search_Path__char_system_02_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_51_good();");
	CWE426_Untrusted_Search_Path__char_popen_51_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_41_good();");
	CWE426_Untrusted_Search_Path__char_system_41_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_10_good();");
	CWE426_Untrusted_Search_Path__char_system_10_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_32_good();");
	CWE426_Untrusted_Search_Path__char_system_32_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_06_good();");
	CWE426_Untrusted_Search_Path__char_popen_06_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_52_good();");
	CWE426_Untrusted_Search_Path__char_popen_52_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_16_good();");
	CWE426_Untrusted_Search_Path__char_system_16_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_14_good();");
	CWE426_Untrusted_Search_Path__char_system_14_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_13_good();");
	CWE426_Untrusted_Search_Path__char_system_13_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_31_good();");
	CWE426_Untrusted_Search_Path__char_system_31_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_03_good();");
	CWE426_Untrusted_Search_Path__char_popen_03_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_51_good();");
	CWE426_Untrusted_Search_Path__char_system_51_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_01_good();");
	CWE426_Untrusted_Search_Path__char_popen_01_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_54_good();");
	CWE426_Untrusted_Search_Path__char_popen_54_good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_63_good();");
	CWE426_Untrusted_Search_Path__char_system_63_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE426_Untrusted_Search_Path__char_system_84::good();");
	CWE426_Untrusted_Search_Path__char_system_84::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_84::good();");
	CWE426_Untrusted_Search_Path__char_popen_84::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_82::good();");
	CWE426_Untrusted_Search_Path__char_popen_82::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_83::good();");
	CWE426_Untrusted_Search_Path__char_popen_83::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_72::good();");
	CWE426_Untrusted_Search_Path__char_system_72::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_81::good();");
	CWE426_Untrusted_Search_Path__char_popen_81::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_74::good();");
	CWE426_Untrusted_Search_Path__char_popen_74::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_81::good();");
	CWE426_Untrusted_Search_Path__char_system_81::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_83::good();");
	CWE426_Untrusted_Search_Path__char_system_83::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_33::good();");
	CWE426_Untrusted_Search_Path__char_system_33::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_83::good();");
	CWE426_Untrusted_Search_Path__char_popen_83::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_43::good();");
	CWE426_Untrusted_Search_Path__char_system_43::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_73::good();");
	CWE426_Untrusted_Search_Path__char_popen_73::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_84::good();");
	CWE426_Untrusted_Search_Path__char_popen_84::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_72::good();");
	CWE426_Untrusted_Search_Path__char_popen_72::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_73::good();");
	CWE426_Untrusted_Search_Path__char_system_73::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_83::good();");
	CWE426_Untrusted_Search_Path__char_system_83::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_43::good();");
	CWE426_Untrusted_Search_Path__char_popen_43::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_84::good();");
	CWE426_Untrusted_Search_Path__char_system_84::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_82::good();");
	CWE426_Untrusted_Search_Path__char_system_82::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_33::good();");
	CWE426_Untrusted_Search_Path__char_popen_33::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_74::good();");
	CWE426_Untrusted_Search_Path__char_system_74::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_62::good();");
	CWE426_Untrusted_Search_Path__char_popen_62::good();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_62::good();");
	CWE426_Untrusted_Search_Path__char_system_62::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE426_Untrusted_Search_Path__char_system_44_bad();");
	CWE426_Untrusted_Search_Path__char_system_44_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_68_bad();");
	CWE426_Untrusted_Search_Path__char_popen_68_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_15_bad();");
	CWE426_Untrusted_Search_Path__char_popen_15_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_21_bad();");
	CWE426_Untrusted_Search_Path__char_popen_21_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_08_bad();");
	CWE426_Untrusted_Search_Path__char_system_08_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_09_bad();");
	CWE426_Untrusted_Search_Path__char_popen_09_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_03_bad();");
	CWE426_Untrusted_Search_Path__char_system_03_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_09_bad();");
	CWE426_Untrusted_Search_Path__char_system_09_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_01_bad();");
	CWE426_Untrusted_Search_Path__char_system_01_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_61_bad();");
	CWE426_Untrusted_Search_Path__char_system_61_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_67_bad();");
	CWE426_Untrusted_Search_Path__char_system_67_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_07_bad();");
	CWE426_Untrusted_Search_Path__char_popen_07_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_22_bad();");
	CWE426_Untrusted_Search_Path__char_system_22_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_07_bad();");
	CWE426_Untrusted_Search_Path__char_system_07_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_11_bad();");
	CWE426_Untrusted_Search_Path__char_system_11_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_15_bad();");
	CWE426_Untrusted_Search_Path__char_system_15_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_05_bad();");
	CWE426_Untrusted_Search_Path__char_popen_05_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_31_bad();");
	CWE426_Untrusted_Search_Path__char_popen_31_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_04_bad();");
	CWE426_Untrusted_Search_Path__char_system_04_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_61_bad();");
	CWE426_Untrusted_Search_Path__char_popen_61_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_18_bad();");
	CWE426_Untrusted_Search_Path__char_system_18_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_02_bad();");
	CWE426_Untrusted_Search_Path__char_popen_02_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_11_bad();");
	CWE426_Untrusted_Search_Path__char_popen_11_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_32_bad();");
	CWE426_Untrusted_Search_Path__char_popen_32_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_53_bad();");
	CWE426_Untrusted_Search_Path__char_system_53_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_12_bad();");
	CWE426_Untrusted_Search_Path__char_popen_12_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_18_bad();");
	CWE426_Untrusted_Search_Path__char_popen_18_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_06_bad();");
	CWE426_Untrusted_Search_Path__char_system_06_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_05_bad();");
	CWE426_Untrusted_Search_Path__char_system_05_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_08_bad();");
	CWE426_Untrusted_Search_Path__char_popen_08_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_34_bad();");
	CWE426_Untrusted_Search_Path__char_popen_34_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_42_bad();");
	CWE426_Untrusted_Search_Path__char_popen_42_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_54_bad();");
	CWE426_Untrusted_Search_Path__char_system_54_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_53_bad();");
	CWE426_Untrusted_Search_Path__char_popen_53_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_42_bad();");
	CWE426_Untrusted_Search_Path__char_system_42_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_64_bad();");
	CWE426_Untrusted_Search_Path__char_system_64_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_14_bad();");
	CWE426_Untrusted_Search_Path__char_popen_14_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_21_bad();");
	CWE426_Untrusted_Search_Path__char_system_21_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_16_bad();");
	CWE426_Untrusted_Search_Path__char_popen_16_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_66_bad();");
	CWE426_Untrusted_Search_Path__char_popen_66_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_65_bad();");
	CWE426_Untrusted_Search_Path__char_popen_65_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_65_bad();");
	CWE426_Untrusted_Search_Path__char_system_65_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_04_bad();");
	CWE426_Untrusted_Search_Path__char_popen_04_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_12_bad();");
	CWE426_Untrusted_Search_Path__char_system_12_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_41_bad();");
	CWE426_Untrusted_Search_Path__char_popen_41_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_13_bad();");
	CWE426_Untrusted_Search_Path__char_popen_13_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_17_bad();");
	CWE426_Untrusted_Search_Path__char_popen_17_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_17_bad();");
	CWE426_Untrusted_Search_Path__char_system_17_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_67_bad();");
	CWE426_Untrusted_Search_Path__char_popen_67_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_10_bad();");
	CWE426_Untrusted_Search_Path__char_popen_10_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_52_bad();");
	CWE426_Untrusted_Search_Path__char_system_52_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_45_bad();");
	CWE426_Untrusted_Search_Path__char_popen_45_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_44_bad();");
	CWE426_Untrusted_Search_Path__char_popen_44_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_64_bad();");
	CWE426_Untrusted_Search_Path__char_popen_64_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_45_bad();");
	CWE426_Untrusted_Search_Path__char_system_45_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_22_bad();");
	CWE426_Untrusted_Search_Path__char_popen_22_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_34_bad();");
	CWE426_Untrusted_Search_Path__char_system_34_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_66_bad();");
	CWE426_Untrusted_Search_Path__char_system_66_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_63_bad();");
	CWE426_Untrusted_Search_Path__char_popen_63_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_68_bad();");
	CWE426_Untrusted_Search_Path__char_system_68_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_02_bad();");
	CWE426_Untrusted_Search_Path__char_system_02_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_51_bad();");
	CWE426_Untrusted_Search_Path__char_popen_51_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_41_bad();");
	CWE426_Untrusted_Search_Path__char_system_41_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_10_bad();");
	CWE426_Untrusted_Search_Path__char_system_10_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_32_bad();");
	CWE426_Untrusted_Search_Path__char_system_32_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_06_bad();");
	CWE426_Untrusted_Search_Path__char_popen_06_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_52_bad();");
	CWE426_Untrusted_Search_Path__char_popen_52_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_16_bad();");
	CWE426_Untrusted_Search_Path__char_system_16_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_14_bad();");
	CWE426_Untrusted_Search_Path__char_system_14_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_13_bad();");
	CWE426_Untrusted_Search_Path__char_system_13_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_31_bad();");
	CWE426_Untrusted_Search_Path__char_system_31_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_03_bad();");
	CWE426_Untrusted_Search_Path__char_popen_03_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_51_bad();");
	CWE426_Untrusted_Search_Path__char_system_51_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_01_bad();");
	CWE426_Untrusted_Search_Path__char_popen_01_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_54_bad();");
	CWE426_Untrusted_Search_Path__char_popen_54_bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_63_bad();");
	CWE426_Untrusted_Search_Path__char_system_63_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE426_Untrusted_Search_Path__char_system_84::bad();");
	CWE426_Untrusted_Search_Path__char_system_84::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_84::bad();");
	CWE426_Untrusted_Search_Path__char_popen_84::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_82::bad();");
	CWE426_Untrusted_Search_Path__char_popen_82::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_83::bad();");
	CWE426_Untrusted_Search_Path__char_popen_83::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_72::bad();");
	CWE426_Untrusted_Search_Path__char_system_72::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_81::bad();");
	CWE426_Untrusted_Search_Path__char_popen_81::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_74::bad();");
	CWE426_Untrusted_Search_Path__char_popen_74::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_81::bad();");
	CWE426_Untrusted_Search_Path__char_system_81::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_83::bad();");
	CWE426_Untrusted_Search_Path__char_system_83::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_33::bad();");
	CWE426_Untrusted_Search_Path__char_system_33::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_83::bad();");
	CWE426_Untrusted_Search_Path__char_popen_83::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_43::bad();");
	CWE426_Untrusted_Search_Path__char_system_43::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_73::bad();");
	CWE426_Untrusted_Search_Path__char_popen_73::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_84::bad();");
	CWE426_Untrusted_Search_Path__char_popen_84::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_72::bad();");
	CWE426_Untrusted_Search_Path__char_popen_72::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_73::bad();");
	CWE426_Untrusted_Search_Path__char_system_73::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_83::bad();");
	CWE426_Untrusted_Search_Path__char_system_83::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_43::bad();");
	CWE426_Untrusted_Search_Path__char_popen_43::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_84::bad();");
	CWE426_Untrusted_Search_Path__char_system_84::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_82::bad();");
	CWE426_Untrusted_Search_Path__char_system_82::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_33::bad();");
	CWE426_Untrusted_Search_Path__char_popen_33::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_74::bad();");
	CWE426_Untrusted_Search_Path__char_system_74::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_popen_62::bad();");
	CWE426_Untrusted_Search_Path__char_popen_62::bad();

	printLine("Calling CWE426_Untrusted_Search_Path__char_system_62::bad();");
	CWE426_Untrusted_Search_Path__char_system_62::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
