//writing files

#include <stdio.h>

int main() {
	FILE * fpointer = fopen("test.txt", "w");

	fprintf(fpointer, "Hello this my first file created\nI am happy if this works as intended");

	fclose(fpointer);
	return 0;
}