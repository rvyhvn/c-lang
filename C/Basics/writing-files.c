#include <stdio.h>

int main(){

	FILE *pF = fopen("test.txt", "a");

	fprintf(pF, "\nHalo ngab");
	fclose(pF);

	if (remove("test.txt") == 0){
		printf("That file was deleted successfully!\n");
	}
	else {
		printf("Not deleted successfully\n");
	}
	return 0;
}
