/*
Programmer: Jorel Rutger
Last update of code: April 16, 2023
Module Functionality:
	Version 1: code entered, commented, compiled with unit module files into an integrated program
	Version 2: recompiles V2 modules into an integrated program.
	Version 3: recompiles V3 modules into an integrated program.
*/

#define _CRT_SECURE_NO_WARNINGS // Define to suppress warning related to standard C library functions

// Includes the header files for each module parts
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void) {
	char buff[10]; // Buffer to hold user input string

	do {	// Menu options
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");
		printf("Which module to run? \n"); // Prompt for user input

		fgets(buff, 10, stdin);

		switch (buff[0]) {		// Calls a function if the user input matches one of the cases
		case '1': fundamentals();
			break;
		case '2': manipulating();
			break;
		case '3': converting();
			break;
		case '4': tokenizing();
			break;
		};

	} while (buff[0] != '0'); // Continues to display menu options until user selects option 0 to exit

	return 0; // Return 0 to indicate successful program execution
}
