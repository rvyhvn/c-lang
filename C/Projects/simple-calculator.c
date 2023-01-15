#include <stdio.h>

int main(){
	char operator; double num1; double num2; double result;
	
	printf("Simple calculator program..\n");
	printf("======================================\n");
	printf("\nChoose the operator by typing the operator\n+\n-\n*\n/\n");
	printf("Your choice: ");
	scanf("%c", &operator);

	printf("\nEnter your first number: ");
	scanf("%lf", &num1);
	
	printf("\nEnter the second number: ");
	scanf("%lf", &num2);

	printf("\n======================================\n");

	switch (operator) {
		case '+':
			result = num1 + num2;
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.2lf x %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '/':
			result = num1 / num2;
			printf("%.2lf x %.2lf = %.2lf\n", num1, num2, result);
			break;
		default:
			printf("%c is not a valid operator.\n", operator);
	}


	return 0;
}
