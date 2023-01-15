#include <stdio.h>

int main()
{
	char grade;
	printf("Masukin nilai mu: ");
	scanf("%c", &grade);
	switch (grade) {
		case 'A' | 'a':
			printf("Sempurna!\n");
			break;
		case 'B' | 'b':
			printf("Hmm, okelah..\n");
			break;
		case 'C' | 'c':
			printf("Yang penting lulus, hehe\n");
			break;
		case 'D' | 'd':
			printf("Njir ngulang, yang penting bukan E\n");
			break;
		case 'E' | 'e':
			printf("Njir ngulang, terpaksa gak bisa lanjut materi :(\n");
			break;
		default:
			printf("Gak ada nilai segitu, E udah paling rendah..\n");
	}

	return 0;
}
