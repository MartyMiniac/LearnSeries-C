//starting with switch-case

#include <stdio.h>

void getRemark(char grade);

int main() {
	getRemark('A');
	return 0;
}

void getRemark(char grade) {
	switch(grade) {
		case 'A':
		printf("You Excelled");
		break;
		case 'B':
		printf("You did Great");
		break;
		case 'C':
		printf("You did not that Great");
		break;
		case 'D':
		printf("You could have done better");
		break;
		case 'F':
		printf("You failed, you need to work harder");
		break;
		default:
		printf("Please check your grade again");
	}
}