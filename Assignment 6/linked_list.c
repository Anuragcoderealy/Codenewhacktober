#include<stdio.h>
#include<malloc.h>
void insertatbegin();
void insertatend();
void insert_spec();
void dele_beg();
void dele_end();
void dele_spe();
void display();
int item;

struct node
{
	int info;
	struct node*next;
};
typedef struct node NODE;
NODE*start=NULL;

void insertatbegin(int item)
{
	NODE *ptr;
	ptr=(NODE *)malloc(sizeof(NODE));
	ptr->info=item;
	if(start==NULL)
		ptr->next=NULL;
	else
    {
		ptr->next=start;
		start=ptr;
	}
}

void insertatend(int item)
{
	NODE *ptr,*loc;
	ptr=(NODE *)malloc(sizeof(NODE));
	ptr->info=item;
	ptr->next=NULL;
	if(start==NULL)
		start=ptr;
	else
	{
		loc=start;
		while(loc->next !=NULL)
		loc=loc->next;
		loc->next=ptr;
	}
}

void insert_spec()
{
	NODE *ptr,*loc;
	int temp,item;
	printf("Enter item: ");
	scanf("%d",&item);
	printf("After which element\n");
	scanf("%d",&temp);
	loc=start;
	while(loc->info != temp)
	{
		loc=loc->next;
	}
	ptr=(NODE *)malloc(sizeof(NODE));
	ptr->info=item;
	ptr->next=loc->next;
	loc->next=ptr;
	return;
}

void dele_beg(void)
{
	NODE *ptr;
	if(start==NULL)
	{
		printf("Empty list\n");
	}
	else
	{
		ptr=start;
		start=start->next;
		printf("%d\n",ptr->info);
		free(ptr);
	}
}

void dele_end(void)
{
	NODE *ptr,*loc;
	if(start==NULL)
	{
		printf("Empty list\n");
	}
	else if(start->next==NULL)
	{
		ptr=start;
		start=NULL;
		printf("%d\n",ptr->info);
		free(ptr);
	}
	else
	{
		loc=start;
		ptr=start->next;
		while(ptr->next !=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		printf("%d\n",ptr->info);
		free(ptr);
	}
}

void dele_spe()
{
	NODE *ptr,*loc;
	int temp;
	printf("Which element?\n");
	scanf("%d\n",&temp);
	ptr=start;
	if(start==NULL)
	{
		printf("Empty list\n");
	}
	else if(ptr->info==temp)
	{
		start=ptr->next;
		printf("Deleted Item: %d\n",ptr->info);
		free(ptr);
	}
	else
	{
		loc=ptr;
		ptr=ptr->next;
		while(ptr!=NULL)
		{
			if(ptr->info==temp)
			{
				loc->next=ptr->next;
				printf("Deleted Item: %d\n",ptr->info);
				free(ptr);
				return;
			}
		loc=ptr;
		ptr=ptr->next;
		}
	}	
}

void display()
{
	NODE*c;
	c=start;
	while(c!=NULL)
	{
		printf("%d ->",c->info);
		c=c->next;
	}
	printf("NULL\n");
}

int main()
{
    int ch;
    do
    {
        printf("1.insertatbegin \n2.insertatend \n3.insert_spec \n4.dele_beg\n5.dele_end\n6.dele_spe\n7.display\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter Data: ");
				scanf("%d",&item);
				insertatbegin(item);
                break;
            case 2:printf("Enter data: ");
				scanf("%d",&item);
				insertatend(item);
                break;
            case 3:insert_spec();
                break;
			case 4:dele_beg();
                break;
			case 5:dele_end();
                break;
			case 6:dele_spe();
                break;
			case 7:display();
                break;	
            case 8:break;
            default:printf("Invalid option\n");
        }
    }while(ch!=8);
}









