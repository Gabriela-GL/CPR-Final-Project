// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "converting.h"


void converting(void) {

	/* Start of Version 1 */
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



/* Version 2 */



/* Version 3 */



}