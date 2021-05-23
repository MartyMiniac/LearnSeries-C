//singlely linked list using struct

#include <stdio.h>
#include <stdlib.h>

struct List {
	int data;
	struct List * next;
};

struct List * create(int data);
void add(struct List * head, int data);
void print(struct List * head);

int main() {
	struct List * head;
	
	head=create(1);
	add(head, 2);
	add(head, 3);
	add(head, 4);
	add(head, 5);
	print(head);
	print(head);

	return 0;
}

struct List * create(int data) {
	struct List * head=malloc(sizeof(struct List));
	head->data=data;
	head->next=NULL;
	return head;
}

void add(struct List * head, int data) {
	struct List * node=head;
	while(node->next!=NULL) {
		node=node->next;
	}

	struct List * newNode=malloc(sizeof(struct List));
	newNode->data=data;
	newNode->next=NULL;

	node->next=newNode;
}

void print(struct List * head) {
	while(head!=NULL) {
		printf("%d\n", head->data);
		head=head->next;
	}
}