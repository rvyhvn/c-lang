#include <stdio.h>

void circle(){
	const float PI = 3.14; double fingers; double result;
	printf("Enter the fingers of the circle in centimeter(s): ");
	scanf("%lf", &fingers);
	result = PI * fingers * fingers;
	printf("The result is = %.2lf cm^2\n", result);
}

int main(){

	printf("Circle circumstance program\n");
	printf("=================================\n");
	circle();	
	return 0;
}
