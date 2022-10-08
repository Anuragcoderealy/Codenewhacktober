#include<stdio.h>
#define MAX 10
int quene[MAX],f=-1,r=-1,i;
int ch,item;
char choice;
void insert();
void delete();
void traverse();
void main()
{
    int ch;
    do
    {
        printf("1.Enter element\n2.Delete element\n3.Display element\n4.Exit\n");
        printf("Enter your choice: ");
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
                default:printf("Invalid Option\n");
        }
    }while(ch!=4);
}

void insert()
{
    if(f==(r+1)%MAX)
    {
        printf("Quene is FULL\n");
    }
    else
    {
        printf("Enter element in the quene: ");
        scanf("%d",&item);
        if(f==-1)
        {
            f+=1;
            r+=1;
            quene[r]=item;
        }
        else
        {
            r=(r+1)%MAX;
            quene[r]=item;
        }
    }
}

void delete()
{
    if(f==-1)
    {
        printf("Quene is empty\n");
        return;
    }
    else if(f==r)
    {
        item=quene[f];
        printf("Deleted element is: %d\n",item);
        f=r=-1;
    }
    else
    {
        item=quene[f];
        printf("Deleted element is: %d\n",item);
        f=(f+1)%MAX;
    }
}

void traverse()
{
    int i;
    if(f==-1)
    {
        printf("Quene is empty\n");
        return;
    }
    if(f<r)
    {
        for(i=f;i<=r;i++)
        {
            printf("%d  ",quene[i]);
        }
    }
    if(f>r)
    {
        for(i=0;i<=r;i++)
        {
            printf("%d  ",quene[i]);
        }
        for(i=f;i<MAX;i++)
        {
            printf("%d  ",quene[i]);
        }
    }
}
