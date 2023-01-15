#include <stdio.h>

void helloWorld(char[], int); // This is the prototype so the computer could know the helloWorld function below main function is already there.

int main(){
	// Functions prototype is function declaration. without body and before the main() function 
	// Ensures declaration to a function are made with the correct arguments.
	char name[] = "Han"; int age = 20;
	helloWorld(name, age);
	return 0;
}

void helloWorld(char name[], int age){
	printf("Hello, %s.\nYou are %d years old\n", name, age);
}
