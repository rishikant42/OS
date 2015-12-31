#include<stdio.h>
#include<stdlib.h>

int main() {
	int x = fork();
	if(x == 0) {
		printf("Hello\n");
	}
	else {
		wait(&x);
		printf("World\n");
	}

	return 0;
}
