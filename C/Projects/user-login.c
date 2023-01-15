#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char username[16]; char passwd[16]; char choice[1];
	
	printf("Masukkan username kamu:\n");
	fgets(username, 16, stdin);
	printf("Oke, username yang kamu daftarkan adalah %s\n", username);

	printf("Sekarang masukkan password kamu:\n");
	fgets(passwd, 16, stdin);
	printf("Password yang kamu masukkan adalah: %s\nApakah kamu yakin?\n", passwd);
	
	scanf("%s", choice);
	if (choice == "y")
	{
		printf("Oke jika kamu sudah yakin");
	}
	else if (choice == "n")
	{
		printf("Kalau belum yakin, lain kali saja");
	}

	return 0;
}
