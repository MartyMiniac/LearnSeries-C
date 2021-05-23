//starting with structs

#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	char subject[50];
	int age;
	double percentage;
};

int main() {
	struct Student student1;
	
	student1.age=21;
	student1.percentage=87.6;
	strcpy(student1.name, "Marty");
	strcpy(student1.subject, "Computer Science");

	printf("Name : %s\n", student1.name);
	printf("Age : %d\n", student1.age);
	printf("Subject : %s\n", student1.subject);
	printf("Percentage : %lf\n", student1.percentage);

	return 0;
}