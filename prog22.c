//char pointer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char * str=malloc(sizeof(char)*100);
	strcpy(str, "Hello");
	printf("%s", str);
	return 0;
}