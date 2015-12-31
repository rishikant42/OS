#include<stdio.h>
#include<stdlib.h>

int main() {
	int pid, status;
	pid = fork();

//	if(pid == -1) {
//		printf("Fork failed\n");
//		exit(1);
//	}


//child
	if(pid == 0) {
		printf("Child here\n");
		exit(0);
	}
							
//parent
	else {			
		wait(&status); //wait till child not terminate.
		printf("Well done kid\n");
		exit(0);
	}
	return 0;
}


//Note difference in code of 1.c and 2.c and there output
