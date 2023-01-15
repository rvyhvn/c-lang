#include <stdio.h>

int main(){

	// memory = an array of bytes within RAM (street)
	// memory block = a single unit (byte) within memory, used to hold some value (person)
	// memory address = address of where a memory block is located (house addresses)
	
	double a = 1.0; int b = 2; int c = 3;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);

	return 0;
}
