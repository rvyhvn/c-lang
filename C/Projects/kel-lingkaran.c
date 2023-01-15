#include <stdio.h>

int main()
{
	float jari_jari;
	const float PI = 3.14;
	printf("Masukkan jari-jari lingkaran dalam satuan centimeter: \n");
	scanf("%f", &jari_jari);

	float kel = 2 * jari_jari * PI;
	printf("Keliling lingkaran tersebut adalah: %.2f cm\n", kel);
	return 0;
}
