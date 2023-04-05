#include "main.h"

int main()
{
	char *buffer;
	size_t buffsize = 32;

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
