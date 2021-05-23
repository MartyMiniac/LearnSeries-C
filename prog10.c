//lets learn about conditional statement

#include <stdio.h>

int max(int num1, int num2);
int _max(int num1, int num2, int num3);

int main() {
	printf("greater number is %d\n", max(6, 9));		//nice 😂
	printf("greater number is %d", _max(4, 2, 0));
	return 0;
}

int max(int num1, int num2) {
	if(num1>num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int _max(int num1, int num2, int num3) {
	if(num1>num2 && num1>num3) {
		return num1;
	}
	else if(num2>num3) {
		return num2;
	}
	else {
		return num3;
	}
}