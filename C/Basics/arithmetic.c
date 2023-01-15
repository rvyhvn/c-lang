#include <stdio.h>

int main()
{
	float x; float y; float z; float a;
	x = 50;
	y = 23;
	z = x + y;
	a = x / y;

	printf("%.0f + %.0f = %.0f\n", x, y, z);
	printf("%.0f / %.0f = %.10f\n", x, y, a);
	
	return 0;
	
}
