#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age: \n");
	scanf("%d", &age);
	if (age >= 20)
	{
		printf("Hey you are kinda old\n");
	}
	else if (age < 0)
	{
		printf("You haven't been born yet, bro..\n");
	}
	else {
		printf("Such a young teenager!\n");
	}
	return 0;
}
