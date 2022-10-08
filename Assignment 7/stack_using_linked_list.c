#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct stack
{
	int no;
	struct stack*next;
};
typedef struct stack S;
S*top=NULL;

void push()
{
	S*node;
	node=(S*)malloc(sizeof(S));
	printf("Enter the element: ");
	scanf("%d",&node->no);
	node->next=top;
	top=node;
}

void pop()
{
	S*temp;
	temp=top;
	if(top==NULL)
	{
		printf("Stack Empty");
	}
	else
	{
		top=top->next;
		printf("Deleted element %d ",temp->no);
		free(temp);
	}
}

void display()
{
	S*t=NULL;
	t=top;
	while(t!=NULL)
	{
		printf("%d->",t->no);
		t=t->next;
	}
	printf("NULL");
}

int main(void)
{
	int ch;
	do
	{
		printf("\n1.Push\n2.Pop\n3.Traverse\n4.Exit\n");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:break;
			default:printf("Invalid choice");
		}
	}while(ch!=4);
	return 0;
}



