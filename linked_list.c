#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node *a, *b;
    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    a->data = 10;
    b->data = 20;
    b->next = NULL;
    printf("%d %d", a->data, b->data);
    return 0;
}