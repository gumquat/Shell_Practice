#include "main.h"

int readLine()
{
	char *buffer;
	size_t buffsize = 64;

	buffer = (char *)malloc(buffsize * sizeof(char));

	if(!buffer)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
        getline(&buffer,&buffsize,stdin);
	printf("%s",buffer);

	return(0);
}
