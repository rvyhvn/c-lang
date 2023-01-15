#include <stdio.h>
#include <math.h>

int main()
{
	double A; double B; double C;
	printf("Program untuk menghitung panjang salah satu sisi segitiga\nhint: masukkan angka dalam satuan centimeter\n");
	printf("----------------------------------------------------------\n");
	printf("Masukkan panjang sisi a segitiga: \n");
	scanf("%lf", &A);
	printf("Masukkan panjang sisi b segitiga: \n");
	scanf("%lf", &B);
	
	C = sqrt(A*A + B*B);
	printf("Panjang sisi yang dicari adalah: %.2lf cm\n", C);

	return 0;
}
