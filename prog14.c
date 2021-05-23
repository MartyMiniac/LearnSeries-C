//number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int num=(int)(((double)rand()/RAND_MAX)*100);
	int inp=-1;
	while(num!=inp) {
		printf("Enter your prediction (0-100) : ");
		scanf("%d", &inp);
		if(num<inp) {
			printf("%d is the bigger than the actual number, please try again\n", inp);
		}
		if(num>inp) {
			printf("%d is the smaller than the actual number, please try again\n", inp);
		}
	}
	printf("Congrats you got it\n%d is the correct input", num);
	return 0;
}