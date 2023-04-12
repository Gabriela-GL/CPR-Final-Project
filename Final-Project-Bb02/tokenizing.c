// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 300
#include "tokenizing.h" // includes header to point libraries and struct used

void tokenizing(void)
{
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
	/* Version 1 >> insert here
	
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
	*/
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

	/* Version 2
>> insert here


	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE]; // will be used to save user input
	char* nextPhrase = NULL; // will be used to find the separator between the phrases
	int phrasesCounter = 0; // will be used to count the total of phrases

	do // conditional loop to check and output the number of phrases and which phrase is (user input)
	{
		printf("Type a few phrases separated by comma (q - to quit): \n");
		fgets(phrases, BUFFER_SIZE, stdin); // receives input from user
		phrases[strlen(phrases) - 1] = '\0'; // assingned the non-terminator value for string librarie tools

		if (strcmp(phrases, "q") != 0) // condition to check if the user want to exit of the programm execution
		{
			nextPhrase = strtok(phrases, ","); //find comma between phrases to count and separate it
			phrasesCounter = 1;

			while (nextPhrase) // loop to print the program results
			{
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase= strtok(NULL, ",");
			}
		}

	} while (strcmp(phrases, "q") != 0); //exit condition from the principal loop
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); //bye message
*/


/* Version 3
>> insert here
*/

	printf("*** Start of Tokenizing sentences Demo ***\n");
	char sentences[BUFFER_SIZE]; // will be used to save user input
	char* nextSentence = NULL; // will be used to find the separator between the sentences
	int sentenceCounter; // will be used to count the total of sentences

	do // conditional loop to check and output the number of sentences and which sentence is (user input)
	{
		printf("Type a few phrases separated by comma (q - to quit): \n");
		fgets(sentences, BUFFER_SIZE, stdin); // receives input from user
		sentences[strlen(sentences) - 1] = '\0'; // assingned the non-terminator value for string librarie tools

		if (strcmp(sentences, "q") != 0) // condition to check if the user want to exit of the programm execution
		{
			nextSentence = strtok(sentences, "."); //find point between sentence to count and separate it
			sentenceCounter = 1;

			while (nextSentence) // loop to print the program results
			{
				printf("Sentence #%d is \'%s\'\n", sentenceCounter++, nextSentence);
				nextSentence = strtok(NULL, ".");
			}
		}

	} while (strcmp(sentences, "q") != 0); //exit condition from the principal loop
	printf("*** End of Tokenizing sentence Demo ***\n\n"); //bye message

}
