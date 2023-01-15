#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	const int MIN = 1;
	const int MAX = 100;
	int guess = 0;
	int guesses = 0;
	int answer = 0;

	srand(time(0));

	answer = (rand() % MAX) + MIN;

	do {
		printf("Enter a guess: ");
		scanf("%d", &guess);
		if (guess > answer){
			printf("Kebanyakan bro\n");
		}
		else if (guess < answer) {
			printf("Kekecilan\n");
		}
		else {
			printf("BETUL!\n");
		}
		guesses++;

	}while (guess!=answer);
	
	printf("=====================\n");
	printf("Answer: %d\n", answer);
	printf("Guesses: %d\n", guesses);
	printf("=====================\n");

	return 0;
}
