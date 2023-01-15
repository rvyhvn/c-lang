#include <stdio.h>
#include <string.h>
void main()
{
	int age; char name[25];
	
	printf("Masukkan username kamu:\n");
	// scanf("%s", name);
	fgets(name, 25, stdin);
	name[strlen(name)-1] = '\0';
	printf("Halo %s, selamat bergabung\n", name);

	printf("Umur kamu berapa?\n");
	scanf("%d", &age);

	printf("Oh, ternyata umur kamu %d\n", age);

}
