//introduction to functions

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num);

int main() {
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);

	printf("%d is a %s number", num, isPrime(num)?"prime":"non prime");

	return 0;
}

bool isPrime(int num) {
	if(num%2==0 && num!=2) {
		return false;
	}
	for(int i=3; i<sqrt(num); i+=2) {
		if(num%i==0) {
			return false;
		}
	}
	return true;
}