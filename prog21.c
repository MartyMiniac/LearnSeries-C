//reading a file

#include <stdio.h>

int main() {
	char line[255];
	FILE * fpointer = fopen("test.txt", "r");

	fgets(line, 255, fpointer);
	printf("1: %s", line);
	fgets(line, 255, fpointer);
	printf("2: %s", line);

	fclose(fpointer);
	return 0;
}