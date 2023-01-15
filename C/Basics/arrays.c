#include <stdio.h>

int main(){
	float list[] = {0.1, 0.2, 0.3, 0.4, 0.5, 1.1, 1.2, 1.3, 1.4, 1.5};
	printf("%.1f\n%.1f\n", list[0], list[8]);
	printf("\n");
	double prices[10] = {1000, 2000, 5000, 10000, 20000, 50000, 75000};
	for (int i = 0; i < 7 ; i++) {
		printf("%.0lf\n", prices[i]);
	
	}
	return 0;
}
