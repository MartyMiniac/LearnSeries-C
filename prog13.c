//starting with while loop

#include <stdio.h>

int main() {
	long num;
	printf("Enter a number : ");
	scanf("%ld", &num);
	while(num!=0) {
		printf("%d\n", num%10);
		num/=10;
	}
	return 0;
}