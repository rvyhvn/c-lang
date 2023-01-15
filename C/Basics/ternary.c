#include <stdio.h>

int findMax(int x, int y){

	return (x < y) ? x : y;
}

int main(){
	// Ternary operator = shortcut to if/else when assigning/returning a value
	// (condition) ? value if true : value if false

	int max = findMax(4, 5);
	printf("%d\n", max);
	return 0;
}
