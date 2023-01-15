#include <stdio.h>

int main(){

	char x = 'X';
	char y = 'Y';
	char temp; // Temporary storage for changing the value of x and y
	
	temp = x;
	x = y;
	y = temp;
	
	printf("x = %c, y = %c\n", x, y);

	return 0;
}
