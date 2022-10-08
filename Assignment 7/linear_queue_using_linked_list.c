#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct queue
{
	int no;
	struct queue*next;
};
typedef struct queue Q;
Q*start=NULL;

void enqueue()
{
	Q *p,*temp;
	temp=start;
	p=(Q*)malloc(sizeof(Q));
	printf("Enter the element: ");
	scanf("%d",&p->no);
	p->next=NULL;
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
}

void dequeue()
{
	Q *temp;
	temp=start;
	if(start==NULL)
	{
		printf("Queue is Empty");
	}
	else
	{
		start=start->next;
		printf("Deleted element: %d",temp->no);
		free(temp);
	}
}

void display()
{
	Q *t=NULL;
	t=start;
	while(t!=NULL)
	{
		printf("%d->",t->no);
		t=t->next;
	}
	printf("NULL");
}

int main()
{
	int ch;
	do
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit\n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:break;
			default:printf("Invalid choice");
		}	
	}while(ch!=4);
	return 0;
}
