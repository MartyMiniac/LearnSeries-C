//create a program that takes a double as inputs calculates the hypotenuse of a right triangle and outputs it

#include <stdio.h>
#include <math.h>

int main() {
	double p, b, h;
	printf("Enter the perpendicular : ");
	scanf("%lf", &p);
	printf("Enter the base : ");
	scanf("%lf", &b);

	h=sqrt(p*p+b*b);
	
	printf("Hypotenuse : %lf", h);
	return 0;
}