#include<stdio.h>
#include<stdlib.h>

int main() {
	int x=1;
	while(x<3) {
		int y = fork();
		if(y == 0) {	
			printf("Hello ");
		}	
		else {
			wait(&y);
			printf("World\n");
		}
	x++;
	}
	return 0;
}

//understand the code 2.c, 3.c, 4.c
