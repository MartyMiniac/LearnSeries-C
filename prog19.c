//dereferencing the pointers

#include <stdio.h>

int main() {
	int age=30;

	printf("age memory address : %p\n", &age);


	int * pAge = &age;

	printf("age memory address : %p\n", pAge);
	printf("value at that memory location : %d\n", *pAge);

	age=69;	//nice😂

	printf("age memory address : %p\n", pAge);
	printf("value at that memory location : %d\n", *pAge);
	return 0;
}