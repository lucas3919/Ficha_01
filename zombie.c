#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {


	// process ID
	pid_t pid;
	pid = fork();
	
	if(pid == 0) //child
	{
		printf("Child ID is: %d\n", getpid());
	}
	
	else //parent

	{ 
		sleep(12);
	}
	return 0;
}
