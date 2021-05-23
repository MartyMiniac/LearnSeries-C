//taking string input

#include <stdio.h>

int main() {
	char name[20];
	printf("Enter your name : ");
	fgets(name, 20, stdin);
	printf("Hello %s", name);
	return 0;
}