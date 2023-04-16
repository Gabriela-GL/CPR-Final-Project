//By Ken Kuo
//header file
#include "manipulating.h"
//standard input library
#include <stdio.h>
//string library
#include <string.h>

void manipulating() {
/* Version 1 
	printf("*** Start of Concatenating String Demo ***\n");
	// 2 strings of size 80
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];
	do {
		printf("Type the first string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		//make the last element of the entered string the NULL terminator to signify the end of the string
		string1[strlen(string1) - 1] = '\0';
		//if statement to check whether the user decides to quit with command q
		if ((strcmp(string1, "q") != 0)) {
			printf("Type the second string:\n");
			fgets(string2, BUFFER_SIZE, stdin);
			//make the last element of the entered string the NULL terminator to signify the end of the string
			string2[strlen(string2) - 1] = '\0';
			//append string2 to string1
			strcat(string1, string2);
			//result of the manipulation
			printf("Concatenated string is \'%s\'\n", string1);
		}
		//iterate only if user did not enter q for the first string
	} while ((strcmp(string1, "q") != 0));*/


/* Version 2 
	printf("*** Start of Comparing Strings Demo ***\n");
	//2 strings of size 80
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	//variable to store result of comparison 
	int result;
	//do while loop to run atleast once before check user input is q to quit
	do {
		//1st string
		printf("Type the 1st string to compare (q - to quit):\n");
		//user input string1
		fgets(compare1, BUFFER_SIZE, stdin);
		//set last member of string1 to NULL terminator to indicate the end of string 
		compare1[strlen(compare1) - 1] = '\0';
		//enter if statment if user input !='q'
		if (strcmp(compare1, "q") != 0) {
			//2nd string
			printf("Type the 2nd string to compare:\n");
			//user input string2
			fgets(compare2, BUFFER_SIZE, stdin);
			//set last member of string2 to NULL terminator to indicate the end of string 
			compare2[strlen(compare2) - 1] = '\0';
			//variable result equals to the result of strring compare function of the 2 entered strings
			result = strcmp(compare1, compare2);
			//if result<0(string1 less than string2
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			//if result = 0(string1 complete equal to string2
			else if (result==0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			//any other senario(result>0 in this case)
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
		//do while condition, only enters the loop if user did not enter 'q' for the first string
	} while (strcmp(compare1, "q") != 0);
	//end of test
	printf("*** End of Comparing Strings Demo ***\n\n");
	*/

/* Version 3 */
	printf("*** Start of Searching Strings Demo ***\n");
	char haystack[BUFFER_SIZE];
	char needle[BUFFER_SIZE];
	char* occurence = NULL;//pointer type no determined size
	do {
		printf("Type the string (q - to quit):\n");
		fgets(haystack, BUFFER_SIZE, stdin); //string to search from
		haystack[strlen(haystack) - 1] = '\0'; //set last member of string to NULL terminator to indicate the end of string 
		if (strcmp(haystack, "q") != 0) {
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin);
			needle[strlen(needle) - 1] = '\0';
			occurence = strstr(haystack, needle);//strstr returns a pointer therefore we need to declair occurence as pointer type
			if (occurence) { //if theres and occurence is not 0
				printf("\'%s\' found at %d position\n", needle, (int)(occurence - haystack));
			}
			else{
				printf("Not found\n");
			}
		}
	} while (strcmp(haystack, "q") != 0);
	printf("*** End of Searching Strings Demo***\n\n");



}
