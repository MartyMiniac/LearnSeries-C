#include <stdio.h>
#include "queue.h"

int main() {
    struct node * head;

    head=create(1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);

    printf("%d\n", peek(head));
    head=pop(head);
    printf("%d\n", peek(head));
    head=pop(head);
    printf("%d\n", peek(head));
    head=pop(head);
    printf("%d\n", peek(head));
    head=pop(head);
    printf("%d\n", peek(head));
    head=pop(head);

    return 0;
}