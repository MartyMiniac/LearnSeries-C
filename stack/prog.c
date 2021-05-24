//implementation of stack using modular code
//#pragma once
#include "./stack.h"
#include <stdio.h>

int main() {
	struct node * head;
	head=create(1);
	printf("%d\n", peek(head));
	
	head=push(head, 2);
	printf("%d\n", peek(head));

	head=push(head, 3);
	printf("%d\n", peek(head));
	
	head=pop(head);
	printf("%d\n", peek(head));
	
	return 0;
}