#include "main.h"

int printPPID()
{
	printf("Process ID: %d\n", getpid() );
	printf("Parent Process ID: %d\n", getppid() );

	return 0;
}
