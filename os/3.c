#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
	int pid = fork();
	
	if(pid == 0) {
		if(execlp("./a.out","",NULL) < 0) {  //we can pass any second argument in execpl here
						     // execute a.out from current directory
			printf("exec failed\n");
		}
	}
	else {
		wait(&pid);
		printf("GOOD BYE\n");
	}
	return 0;
}
