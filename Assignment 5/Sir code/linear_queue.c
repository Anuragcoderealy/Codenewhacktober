#include<stdio.h>
#define MAX 5
int arr[MAX],front=-1,rear=-1,i;
void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    do
    {
        printf("1.Enter element\n2.delete element\n3.display\n4.exit\n");
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
            default:printf("Invalid option\n");
        }
    }while(ch!=4);
}

void enqueue()
    {
        if(rear==MAX-1)
        {
            printf("Queue full\n");
            return;
        }
        rear++;
        printf("Enter element: ");
        scanf("%d",&arr[rear]);
        if(front==-1)
        front++;
    }
void dequeue()
    {
    if(front==-1)
        {
            printf("Queue empty\n");
                return;
        }
        printf("Deleted element:%d\n",arr[front]);
        if(front==rear)
        front=rear=-1;
        else

         front++;
    }
void display()
{
    if(front==-1)
        {
            printf("Queue is empty\n");
            return;
        }
        printf("Elements in queue are: FRONT->");
        for(i=front;i<=rear;i++)
        printf("....%d",arr[i]);
        printf("....<-REAR\n");
}