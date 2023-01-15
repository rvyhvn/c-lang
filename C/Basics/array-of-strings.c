#include <stdio.h>
#include <string.h>

int main(){

	char string[][10] = {"Nike", "Adidas", "FILA", "PUMA"};

	for (int i = 0; i < 5; i++) {
		printf("%s\n", string[i]);
	
	}

	// Replace a new string to the list of string using strcpy() function
	
	strcpy(string[0], "Vans"); // This should display "Vans" at the first idx so "Nike" will be replaced
	
	for (int j = 0; j < 4; j++) {
		printf("%s\n", string[j]);
	
	}

	return 0;
}
