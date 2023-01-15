#include <stdio.h>

int main(){

	int x = 6; // 6 = 00000110
	int y = 12; // 12 = 00001100
	int a = 0; // 0 = 00000000
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	a = x & y;
	b = x | y;
	c = x ^ y;
	d = x << y;
	e = x >> y;
	
	printf("AND = %d\n", a);
	printf("OR = %d\n", b);
	printf("XOR = %d\n", c);
	printf("Left Shift = %d\n", d);
	printf("Right shift = %d\n", e);

	return 0;
}
