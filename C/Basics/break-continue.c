#include <stdio.h>

int main(){
	
	// Continue = skips	rest of code and force to next iteration of the loop
	// Break = stop the looping
	printf("This is for loop with continue function\n");
	for (int i = 1; i <= 10; i++) {
		if (i == 5){
			continue;
		}
		printf("%d\n", i);
	}
	printf("This is for loop with break function\n");
	for (int j = 1; j <= 10; j++) {
		if (j == 5){
			break;
		}
		printf("%d\n", j);
	}
	return 0;
}
