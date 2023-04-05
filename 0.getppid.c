#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("The Procces Id is: %d\n", getpid());
	printf("The Parent Procces Id is: %d\n", getppid());
	return (0);
}

