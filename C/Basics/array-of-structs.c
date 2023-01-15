#include <stdio.h>
#include <string.h>

struct Student{

	char name[25];
	float gpa;

};

int main(){

	struct Student student1 = {"Zaky", 3.40};
	struct Student student2 = {"Rehan", 3.00};
	struct Student student3 = {"Daffa", 3.20};
	struct Student student4 = {"Abel", 3.50};
	struct Student student5 = {"Febri", 3.30};

	struct Student students[] = {student1, student2, student3, student4, student5};

	for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
		printf("%-12s\t", students[i].name);
		printf("%.2f\n", students[i].gpa);
	}

	return 0;
}
