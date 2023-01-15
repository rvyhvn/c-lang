#include <stdio.h>
#include <locale.h>
int main(){
	int menu; int menu2; float celcius; float kelvin; float fahrenheit; float reamur; char ch = 248;
	printf("Program konversi suhu\n");
	printf("===================================\n");
	printf("\nPilih awal satuan anda\n(1)Celcius\n(2)Kelvin\n(3)Fahrenheit\n(4)Reamur\n");
	
	scanf("%d", &menu);
	if (menu == 1) {
		printf("\nMasukkan suhu Celcius: ");
		scanf("%f", &celcius);
		printf("========================\n");
	}
	else if (menu == 2) {
		printf("\nMasukkan suhu Kelvin: ");
		scanf("%f", &kelvin);
		printf("========================\n");
	}
	else if (menu == 3) {
		printf("\nMasukkan suhu Fahrenheit: ");
		scanf("%f", &fahrenheit);
		printf("========================\n");
	}
	else if (menu == 4) {
		printf("\nMasukkan suhu Reamur: ");
		scanf("%f", &reamur);
		printf("========================\n");
	}
	else {
		printf("Anda salah memasukkan pilihan!");
	}	
	
	printf("\nPilih satuan tujuan\n(1)Celcius\n(2)Kelvin\n(3)Fahrenheit\n(4)Reamur\n");
	scanf("%d", &menu2);

	if (menu == 1 && menu2 == 1) {
		printf("Pilihan anda sama, tidak perlu dikonversi. Hasilnya tetap %.2f%cC\n", celcius, ch);
	}
	else if (menu == 1 && menu2 == 2) {
		float konv_cel_kelvin = celcius + 273.15;
		printf("Hasil konversi celcius ke kelvin adalah: %.2f K\n", konv_cel_kelvin);
	}
	else if (menu == 1 && menu2 == 3) {
		float konv_cel_fahrenheit = celcius * 9/5 + 32;
		printf("Hasil konversi celcius ke fahrenheit adalah: %.2f%cF\n", konv_cel_fahrenheit, ch);
	}
	else if (menu == 1 && menu2 == 4) {
		float konv_cel_reamur = celcius * 4/5;
		printf("Hasil konversi celcius ke reamur adalah: %.2f%cR\n", konv_cel_reamur, ch);
	}
	else if (menu == 2 && menu2 == 1) {
		float konv_kel_celcius = kelvin - 273.15;
		printf("Hasil konversi kelvin ke celcius adalah: %.2f%cC\n", konv_kel_celcius, ch);
	}
	else if (menu == 2 && menu2 == 2) {
		printf("Pilihan anda sama, tidak perlu dikonversi. Hasilnya tetap %.2f K\n", kelvin);
	}
	else if (menu == 2 && menu2 == 3) {
		float konv_kel_fahrenheit = kelvin - 273.15 * 9/5 + 32;
		printf("Hasil konversi kelvin ke fahrenheit adalah: %.2f%cF\n", konv_kel_fahrenheit, ch);
	}
	else if (menu == 2 && menu2 == 4) {
		float konv_kel_reamur = (kelvin - 273.15) * 4/5 ;
		printf("Hasil konversi kelvin ke reamur adalah: %.2f%cR\n", konv_kel_reamur, ch);
	}
	else if (menu == 3 && menu2 == 1) {
		float konv_fah_celcius = (fahrenheit - 32) * 9/5;
		printf("Hasil konversi fahrenheit ke celcius adalah: %.2f%cC\n", konv_fah_celcius, ch);
	}
	else if (menu == 3 && menu2 == 2) {
		float konv_fah_kelvin = (fahrenheit - 32) * 9/5 + 273.15;
		printf("Hasil konversi fahrenheit ke kelvin adalah: %.2f%cR\n", konv_fah_kelvin, ch);
	}
	else if (menu == 3 && menu2 == 3) {
		printf("Pilihan anda sama, tidak perlu dikonversi. Hasilnya tetap %.2f%cF\n", fahrenheit, ch);
	}
	else if (menu == 3 && menu2 == 4) {
		float konv_fah_reamur = (fahrenheit - 32) * 9/5 * 4/5 ;
		printf("Hasil fahrenheit celcius ke reamur adalah: %.2f%cR\n", konv_fah_reamur, ch);
	}
	else if (menu == 4 && menu2 == 1){
		float konv_rea_celcius = reamur * 5/4;
		printf("Hasil konversi reamur ke celcius adalah: %.2f%cC\n", konv_rea_celcius, ch);
	}
	else if (menu == 4 && menu2 == 2){
		float konv_rea_kelvin = reamur * 5/4 + 273.15;
		printf("Hasil konversi reamur ke celcius adalah: %.2f K\n", konv_rea_kelvin);
	}
	else if (menu == 4 && menu2 == 3){
		float konv_rea_fahrenheit;
		printf("Hasil konversi reamur ke fahrenheit adalah: %.2f%cF\n", konv_rea_fahrenheit, ch);
	}
	else if (menu == 4 && menu2 == 4){
		printf("Pilihan anda sama, tidak perlu dikonversi. Hasilnya tetap %.2f%cR\n",reamur, ch);
	}
	
	return 0;
}
