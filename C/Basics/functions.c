#include <stdio.h>

// General functions in C lang
void helloWorld(){
	printf("Hello world\n");
}

// Functions with arguments in it
void birthday(char name[], int age){
	printf("Hey happy birthday, %s\n", name);
	printf("You are %d years old!\n", age);
}

// Functions with return value
double luasPersegi(double x){
	return x * x;
}

// Call the functions in the main function
int main(){
	char name[] = "Bro"; int age = 20; 
	double x = luasPersegi(5.00);
	printf("The result of 5 * 5 is %.2lf\n", x);
	helloWorld();
	birthday(name, age);

	return 0;
}
