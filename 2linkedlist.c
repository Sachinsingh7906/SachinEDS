#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head;
    struct Node *second;
    struct Node *third;
  
    // Create 3 nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    

    // Put data in nodes
    head->data = 10;
    second->data = 20;
    third->data = 30;
 

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;
   
    // Print
   struct Node *temp = head;

while (temp != NULL) {
    printf("%d \n", temp->data);
    temp = temp->next;
}

    return 0;
}