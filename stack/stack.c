#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct node * create(int data) {
    struct node * head=malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;
    
    return head;
}
struct node * push(struct node * head, int data) {
    struct node * newHead=malloc(sizeof(struct node));
    newHead->data=data;
    newHead->next=head;
    
    return newHead;
}
int peek(struct node * head) {
    return head->data;
}
struct node * pop(struct node * head) {
    struct node * temp=head->next;
    free(head);
    return temp;
}