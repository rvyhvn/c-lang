#include <stdio.h>

int main(){
	int num[5][5] = {{1, 2, 3, 4, 5}, {2, 4, 6, 8, 10}};
	printf("%d\n", num[0][2]); // This will print 3
	printf("%d\n", num[1][2]); // This will print 6

	return 0;
}
