#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){ //ptr points to a struct type node
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in the linked list in Heap   //(WE HAVE DYNAMICALLY ALLOCATED MEMORY)
    head = (struct Node *)malloc(sizeof(struct Node));    // Head is a struct pointer 
    second = (struct Node *)malloc(sizeof(struct Node));    
    third = (struct Node *)malloc(sizeof(struct Node));    

    // Link first and second nodes
    head->data = 7;       // For accessing data of struct pointer we use arrow operator
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Terminate the list at the nodes
    third->data = 66;
    third->next = NULL;

    linkedListTraversal(head);
    return 0;
}