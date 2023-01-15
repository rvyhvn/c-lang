#include <stdio.h>
#include <ctype.h>

int main(){

	char questions[][100] ={
	"1. Kapan zaky jadi wibu?: ",
	"2. Apakah zaky suka loli?: ",
	"3. Siapa nama waifunya zaky?: "
	};
	
	char options[][100] ={
	"A. Pas SD", "B. Pas SMP", "C. Pas SMK",
	"A. Benar", "B. Tidak", "C. Sukanya MILF",
	"A. Nishimiya (cewek bisu)", "B. Makima", "C. Tsunade"
	};

	char answers[3] = {'C', 'C', 'B'};
	int banyakPertanyaan = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score = 0;
	
	printf("QUIZ GAME\n");

	for (int i = 0; i < banyakPertanyaan; i++) {
		printf("%s\n", questions[i]);

		for (int j = (i * 3); j < (i * 3) + 3; j++){
			printf("%s\n", options[j]);
		}

		printf("Jawaban: ");
		scanf("%c", &guess);
		scanf("%*c");

		guess = toupper(guess);

		if(guess == answers[i]){
			printf("Betul!\n");
			score++;
		}
		else {
			printf("Salah!\n");

		}
	}
	printf("Skor anda adalah: %d/%d", score, banyakPertanyaan);
	return 0;
}
