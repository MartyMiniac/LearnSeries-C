//starting with arrays

#include <stdio.h>

int main() {
	int size;
	
	printf("Enter the size of array : ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Starting entering number into array : \n");
	for(int i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}

	int sum=0;
	for(int i=0; i<size; i++) {
		sum+=arr[i];
	}

	printf("Sum of all the numbers in the array : %d", sum);
	return 0;
}