#include <stdio.h>

void printAge(int *pAge){

	printf("You are %d years old\n", *pAge);

}

int main(){

	// pointer = a "variable-like" reference that holds a memory address to another variable, array, etc. some tasks are performed more easily with pointers
	// * = indirection operator (value at address)
	
	int age = 20;
	int *pAge = NULL;
	pAge = &age;

	printf("Address of age = %p\n", &age);
	printf("Value of pAge = %p\n", pAge);
	printf("Value of age = %d\n", age);
	printf("Value at stored address = %d\n", *pAge);
	printAge(pAge);

	return 0;
}
