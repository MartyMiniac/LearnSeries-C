struct node {
    int data;
    struct node * next;
};

struct node * create(int data);
void push(struct node * head, int data);
int peek(struct node * head);
struct node * pop(struct node * head);