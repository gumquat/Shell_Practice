#include "main.h"

int main() 
{
	int i, pid, status;

	for (i = 0; i < 5; i++) 
	{

		pid = fork(); //duplicate. child and parent continue from here

		if (pid == 0) //child process 
		{
			execl("/bin/ls", "ls", "-l", "/tmp", (char*)NULL);
			exit(0);
		}
		else if (pid > 0) //parent process
		{
			waitpid(pid, &status, 0);
		}
		else //error 
		{
			perror("couldn't fork");
			exit(1);
		}
	}

	return 0;
}

