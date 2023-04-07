#include "main.h"

char **string_splitter(char *str, int *count)
{
	char *token;
	char **words = NULL;
	int index = 0;
	
	token = strtok(str, " ");
	
	while(token != NULL)
	{
		words = realloc(words, (index + 1) * sizeof(char*));
		words[index] = token;
		index++;
		token = strtok(NULL, " ");
	}
	
	*count = index;
	return words;
}
