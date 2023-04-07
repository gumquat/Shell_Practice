#include "main.h"

int entry_point(void)
{
	/* variables for ...*/
	size_t n = 0;
	int index, count;
	char *input, *lineptr = NULL;
	char **commands;
	int child = 999;

	//begin prompt and getline here, waits for input
	while(1)
	{
		printf("$ ");
		getline(&input, &size, stdin);

		printf("Input Accepted: %s", input);
		commands = string_splitter(input, &count);


		for (index = 0; index < count; index++)
		{
			printf("%d: %s\n", index, commands[index]);
		}
	
	//fork begins here
	child = fork();
	//fork check
	printf("Forked by/Parent: %d\n", child);

		if (child == 0) //if 0, its the child
		{
			printf("I am a working child.\n");
		
			if (execve(commands[0], commands, NULL) == -1)
			{
				perror("FUcky WucKY!!!");
				return (-1); //this kills the crab
			}
			return (0); //returning 0 means its stil a child
		}
		else //wait until chidlren are done in the mines, then parent works
		{
			printf("Parent is being very patient rn...\n");
			wait(NULL);
			printf("Parent has begun working.\n");
		}
	}	

	}

	return (0);
}
