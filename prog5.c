//reading using scanf and printing of characters

#include <stdio.h>

int main() {
	char ch;
	printf("Enter a character name : ");
	scanf("%c", &ch);
	printf("You Entered %c", ch);
	return 0;
}