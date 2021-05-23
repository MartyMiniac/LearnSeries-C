//basic calculator

#include <stdio.h>

int main() {
	double num1, num2, ans;
	int ch;
	printf("Enter the First Number : ");
	scanf("%lf", &num1);
	printf("Enter the Second Number : ");
	scanf("%lf", &num2);
	printf("Enter\n1> num1+num2\n2> num1-num2\n3> num1*num2\n4> num1/num2\nYour Choice : ");
	scanf("%d", &ch);

	switch(ch) {
		case 1:
		ans=num1+num2;
		break;
		case 2:
		ans=num1-num2;
		break;
		case 3:
		ans=num1*num2;
		break;
		case 4:
		ans=num1/num2;
		break;
		default:
		printf("Invalid Option");
		return 0;
	}

	printf("Ans = %f", ans);

	return 0;
}