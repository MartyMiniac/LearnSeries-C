#include <stdlib.h>
#include "queue.h"

struct node * create(int data) {
    struct node * head = malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;

    return head;
}

void push(struct node * head, int data) {
    struct node * newNode=create(data);
    struct node * temp = head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
}

int peek(struct node * head) {
    return head->data;
}

struct node * pop(struct node * head) {
    struct node * temp=head->next;
    free(head);
    return temp;
}