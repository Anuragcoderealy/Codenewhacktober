#include<stdio.h>
#define MAX 4
void insert();
void delete();
void traverse();
int f=-1;
int r=-1;
int queue[MAX];
int ch,item;
char choice;

int main()
{
    int ch;
    do
    {
        printf("\n1.Enter element\n2.delete element\n3.display\n4.exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                break;
            case 2:delete();
                break;
            case 3:traverse();
                break;
            case 4:break;
                default:printf("Invalid option\n");
        }
    }while(ch!=4);
}

void insert()
{
    if(f==(r+1)%MAX)
    {
        printf("queue full\n");
    }
    else
    {
        printf("enter data:");
        scanf("%d",&item);
        if(f==-1)
        {
            f=f+1;
            r=r+1;
            queue[r]=item;
        }
        else
        {
            r=(r+1)%MAX;
            queue[r]=item;
        }
    }
}

void delete()
{
    if(f==-1)
    {
        printf("queue empty\n");
    }
    else
    item=queue[f];
    printf("deleted item:%d",item);
    if(f==r)
    {
        f=r=-1;
    }
    else
    {
        f=(f+1)%MAX;
    }
}

void traverse()
{
    int i;
    if(f==-1)
    {
        printf("queue empty\n");
    }
    if(f<r)
    {
        for(i=f;i<=r;i++)
        {
            printf("%d ",queue[i]);
        }

    }
    if(f>r)
    {
        for(i=0;i<=r;i++)
        {
            printf("%d ",queue[i]);
        }
        for(i=f;i<MAX;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}