//2d array and the nested loop

#include <stdio.h>

int main() {
	int x=10, y=10;
	int nums[y][x];
	
	for(int i=0; i<y; i++) {
		for(int j=0; j<x; j++) {
			nums[i][j]=i*j;
		}
	}
	
	for(int i=0; i<y; i++) {
		for(int j=0; j<x; j++) {
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}

	return 0;
}