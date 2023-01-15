#include <stdio.h>

int main(){
	// For loops syntax
	// repeats from the specified index to the specified final index

	for(int index = 1; index <= 5; index++){
		printf("Hello world\n");
		if (index == 5){
			printf("\n");
		}
	}

	// While loops syntax
	// Checking the condition first then execute the arguments
	// infinate repeats except we put the increment
	int i = 0;
	while(i < 5) {
		printf("Hello bang\n");
		i++;
	}
	// Do while loops syntax
	// Always execute the arguments first then check the condition
	int number = 0; int sum = 0;

	do {
		printf("Enter a # above 0: ");
		scanf("%d", &number);
		printf("Enter a negatif number to exit\n");
		if (number > 0){
			sum += number;

		}	
	
	}while (number > 0);
	printf("the summary is: %d\n", sum);
	
	// Nested loops syntax, a loop inside a loop
	int rows; int columns; char symbol;

	printf("\nEnter the number of row: ");
	scanf("%d", &rows);
	printf("Enter the number of column: ");
	scanf("%d", &columns);
	getchar(); // Clear the buffer to enter symbol 
	printf("Enter a symbol to use: ");
	scanf("%c", &symbol);
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++) {
			printf("%c", symbol);
		}
		printf("\n");
	}


	return 0;
}
