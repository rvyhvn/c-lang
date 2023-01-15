#include <stdio.h>
#include <math.h>

int main()
{
	double A = sqrt(9);
	double B = pow(3, 2);
	float C = roundf(3.5);
	int D = ceil(3.14);
	double E = floor(3.99);
	double F = fabs(-100.0);
	double G = log(3);
	double H = sin(45);
	double I = cos(45);
	double J = tan(45);

	printf("akar %.2f\n", A);
	printf("power %.2f\n", B);
	printf("round format %.3f\n", C);
	printf("ceil format %d\n", D);
	printf("floor format %.2f\n", E);
	printf("angka mutlak %.2f\n", F);
	printf("log %.2f\n", G);
	printf("sinus %.2f\n", H);
	printf("cosinus %.2f\n", I);
	printf("tangen %.2f\n", J);


	return 0;
}
