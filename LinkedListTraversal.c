#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

void linkedListTraversal(struct node * ptr){
	while(ptr != NULL){
		printf("Element: %d\n", ptr->data);
	    ptr = ptr->next;
	}
}

int main(){
	struct node * head;
	struct node * second;
	struct node * third;
	
//	Allocate memory for nodes in the linked list in heap
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	
//	Link first and second nodes
	head->data = 7;
	head->next = second;
	
//	Link second and third nodes
	second->data = 11;
	second->next = third;
	
//	Terminate the list at third node
	third->data = 18;
	third->next = NULL;
	
	linkedListTraversal(head);
	
	return 0;
}
