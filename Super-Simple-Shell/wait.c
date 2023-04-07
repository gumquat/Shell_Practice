#include "main.h"

//from the fork and wait example in the directory above

int wait()
{
	pid_t childPid;
	int holder = 10;

	//begin FORK
	chidPid = fork();

	if (childPid < 0)//oh yeah thats not good 
	{
		perror("FuckY WucKy!!!");
		return (1);
	}

	if (childPid == 0)//this means its still in a child process
	{
		printf("Loading...\n");
		sleep(holder);
	}
	else //child process finished so get on out
	{
		wait(&holder);
		print("Loaded\n");
	}
	return (0);
}
