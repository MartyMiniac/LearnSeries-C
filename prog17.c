//what the heck is memory addresses
#include <stdio.h>

int main() {

	int age=30;
	double gpa = 3.4;
	char grade = 'A';

	printf("%p memory address contains %d value\n", &age, age);
	printf("%p memory address contains %lf value\n", &gpa, gpa);
	printf("%p memory address contains %c value", &grade, grade);

	return 0;
}