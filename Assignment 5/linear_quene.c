#include<stdio.h>
#define MAX 10
int arr[MAX],front=-1,rear=-1,i;
void enquene();
void dequene();
void display();
void main()
{
    int ch;
    do
    {
        printf("1.Enter the element \n2.Delete element \n3.Display element \n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enquene();
                break;
            case 2:dequene();
                break;
            case 3:display();
                break;
            case 4:break;
            default:printf("Invalid option\n");
        }
    }while(ch!=4);
}

void enquene()
{
    int add;
    if(rear==MAX-1)
    {
        printf("Quene is Full\n");
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        printf("Enter element in the quene: ");
        scanf("%d",&add);
        arr[rear]=add;
    }
    else
    {
        rear ++;
        printf("Enter element in the quene: ");
        scanf("%d",&add);
        arr[rear]=add;
    }
}

void dequene()
{
    if(front==-1 || front>rear)
    {
        printf("Quene is empty\n");
        return;
    }
    else if (front == rear)
    {
        front=-1;
        rear=-1;
    }
    else
	{
		printf("Deleted element is: %d\n",arr[front]);
        front++;
	}
}

void display()
{
    if(front==-1)
    {
        printf("Quene is empty\n");
        return;
    }
    else
    {
        printf("Elements in quene are: \n");
        for(i=front;i<=rear;i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
}
