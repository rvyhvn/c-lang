#include <stdio.h>
#include <string.h>

struct Player{
	char name[12];
	int score;

};

int main(){
	
	// Struct = collection of related members or variables
	// they can be of different data types
	// listed under one name in a block of memory
	// VERY SIMILAR to classes in other languages (but no methods)
	
	struct Player player1;
	struct Player player2;
	struct Player player3;

	strcpy(player1.name, "Ujang");
	player1.score = 420;

	strcpy(player2.name, "Cecep");
	player2.score = 666;

	strcpy(player3.name, "Zaky");
	player3.score = 69;

	printf("Player: %s\n", player1.name);
	printf("Score: %d\n", player1.score);

	printf("\nPlayer: %s\n", player2.name);
	printf("Score: %d\n", player2.score);

	printf("\nPlayer: %s\n", player3.name);
	printf("Score: %d\n", player3.score);

	return 0;
}
