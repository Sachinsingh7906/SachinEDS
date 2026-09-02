#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head;

    // Create a node
    head = (struct Node*)malloc(sizeof(struct Node));

    // Store data
    head->data = 10;

    // No next node
    head->next = NULL;

    // Print data
    printf("Data = %d", head->data);

    return 0;
}