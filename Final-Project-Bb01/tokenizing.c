// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 300
#include "tokenizing.h" // includes header to point libraries and struct used

void tokenizing(void)
{
	/* Version 1 >> insert here
	*/
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE]; //word will be used to save user input
	char* nextWord = NULL; // nextword will be used to find the spaces between word to separate it before the output
	int wordsCounter = 0; // wordCounter will be used to count the total of words

	do // conditional loop to check and output the number of words and which word is (user input)
	{
		printf("Type a few words separated by space (q - to quit): \n");
		fgets(words, BUFFER_SIZE, stdin); // receives input from user
		words[strlen(words) - 1] = '\0'; // assingned the non-terminator value for string librarie tools

		if (strcmp(words, "q") != 0) // condition to check if the user want to exit of the programm execution
		{
			nextWord = strtok(words, " "); //find spaces between word to count and separate it
			wordsCounter = 1;

			while (nextWord) // loop to print the program results
			{
				printf("Words #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");
			}
		}

	} while (strcmp(words, "q") != 0); //exit condition from the principal loop
	printf("*** End of Tokenizing Words Demo ***\n\n"); //bye message

}

/* Version 2
>> insert here
*/

/* Version 3
>> insert here
*/
