#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;
	size_t buffSize = 32;

	buffer = (char*)malloc(buffSize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	getline(&buffer, &buffSize, stdin);
	printf("%s", buffer);
	return (0);
}
