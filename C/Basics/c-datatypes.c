#include <stdio.h>
#include <stdbool.h>

int main()
{
	char a = 'C'; // single character %c
	char b[] = "Hanshi"; // array of characters %s
	
	float c = 3.141592; // 4 bytes (32 bits) 6 - 7 digits %f
	double d = 3.141592653589793; // 8 bytes (64 bits) 15 - 16 digits %lf
	
	bool e = true; // 1 byte (true or false) %d
	
	char f = 100; // 1 byte (-128 to +127) %d or %c
	unsigned char g = 225; //1 byte (0 to +255) %d or %c
	
	short int h = 32767; // 2 bytes (-32,678 to +32,767) %d
	unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d
	
	int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
	unsigned int k = 65545; // 4 bytes (0 to +4,294,967,295) %u
	
	long long int l = 922337203685477807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
	unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

	//format specifier % = defines and formats a type of data to be displayed
	
	// %c = character
	// %s = string
	// %f = float
	// %lf = double
	// %d = integer
	
	// %.1 = decimal precision
	// %1 = minimum field width
	// %- = left align

	printf("%c\n", a);
	printf("%s\n", b);
	printf("%f\n", c);
	printf("%lf\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	printf("%d\n", h);
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%u\n", k);
	printf("%lld\n", l);
	printf("%llu\n", m);

	printf("\n");
	printf("\n");

	float barang1 = 5.500;
	float barang2 = 7.000;
	float barang3 = 10.999;

	printf("Harga barang 1 = Rp.%.3f\n", barang1);
	printf("Harga barang 2 = Rp.%.3f\n", barang2);
	printf("Harga barang 3 = Rp.%.3f\n", barang3);
			  
	return 0;
}
