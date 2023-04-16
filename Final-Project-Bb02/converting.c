// CONVERTING MODULE SOURCE

/*

Programmer: Jorel Rutger
Last update of code: April 12, 2023

Module Functionality:
	Version 1: Obtains a string and converts it into an integer.
	Version 2: Obtains a string and converts it into a double.

*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "converting.h"


void converting(void) {

	/* V1: Start of Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n");

	char	intString[BUFFER_SIZE]; // Buffers holding user input string
	int		intNumber; // A variable to store a converted integer

	do {
		// Input Prompt
		printf("Please enter an integer numeric string (or 'q' to quit):\n");

		fgets(intString, BUFFER_SIZE, stdin); // Reads input string from the user
		intString[strlen(intString) - 1] = '\0'; // Removes newline character at the end of input string

		if (strcmp(intString, "q") != 0) { // Checking if input string is not equal to "q"
			// Conversion and Output
			intNumber = atoi(intString); // Converts input string to integer
			printf("The converted number is: %d\n", intNumber); // Displays the converted integer
		}

	} while (strcmp(intString, "q") != 0); // Continue looping until input string is "q"


	printf("*** End of Converting Strings to int Demo ***\n\n");
	/* End of Version 1 */


	/* V2: Start of Version 2 */
	printf("*** Start of Converting Strings to double Demo ***\n");
	char	doubleString[BUFFER_SIZE]; // Buffers holding user input string
	double	doubleNumber; // A variable to store a converted double

	do {
		// Input Prompt
		printf("Type the double numeric string (q - to quit):\n");

		fgets(doubleString, BUFFER_SIZE, stdin); // Reads input string from the user
		doubleString[strlen(doubleString) - 1] = '\0'; // Removes newline character at the end of input string

		if ((strcmp(doubleString, "q") != 0)) { // Checking if input string is not equal to "q"
			// Conversion and Output
			doubleNumber = atof(doubleString); // Converts input string to double
			printf("Converted number is %f\n", doubleNumber); // Displays the converted double
		}
	} while (strcmp(doubleString, "q") != 0); // Continue looping until input string is "q"

	printf("*** End of Converting Strings to double Demo ***\n\n");
	/* End of Version 2 */	


	/* V3: Start of Version 3 */
	printf("*** Start of Converting Strings to long Demo ***\n");
	char	longString[BUFFER_SIZE]; // Buffers holding user input string
	long	longNumber; // A variable to store a converted long

	do {
		// Input Prompt
		printf("Type the long numeric string (q - to quit):\n");

		fgets(longString, BUFFER_SIZE, stdin); // Reads input string from the user
		longString[strlen(longString) - 1] = '\0'; // Removes newline character at the end of input string

		if ((strcmp(longString, "q") != 0)) { // Checking if input string is not equal to "q"
			// Conversion and Output
			longNumber = atol(longString); // Converts input string to long int
			printf("Converted number is %ld\n", longNumber); // Displays the converted long
		}
	} while (strcmp(longString, "q") != 0); // Continue looping until input string is "q"

	printf("*** End of Converting Strings to long Demo ***\n\n");
	/* End of Version 3 */
}
