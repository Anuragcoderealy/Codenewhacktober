#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct node{
    int data;
	struct node* next;	
};

struct node* front=NULL;
struct node* rear=NULL;

void enqueue(int x){
	struct node* newnode=(struct node*)malloc(sizeof(node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=newnode;
		rear=newnode;
		
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
	
	
}

void display()
{
	struct node* temp;
	if(front==NULL && rear==NULL)
	{
		printf("\n queue is empty\n");
		
	}
	else{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}

void dequeue(){
	struct node* temp=front;
	if(front==NULL && rear==NULL)
	{
		printf("\n queue underflow\n");
		
	}
	else{
		printf("%d",front->data);
		front=front->next;
		free(temp);
	}
}

int peek(){
	if(front==NULL)
	{
		return INT_MAX;
	}
	else{
		return front->data;
	}
}

                     