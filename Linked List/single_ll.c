//various operations on a single linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void create(){
    struct Node *new, *ptr;
    int i=0;
    char ch;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    new->next = NULL;
    head = new;
    ptr = head;
    fflush(stdin);

    while(i!=1){
        printf("Do you want to add (Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='Y' || ch=='y'){
            new = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter next value: ");
            scanf("%d", &new->data);
            new->next=NULL;
            ptr->next=new;
            ptr = new;
            fflush(stdin);
        }
        else{
            i=1;
        }
    }
}

void traverse(){
    struct Node *ptr;
    ptr = head;
    printf("The list is:");
    while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
}

void count_num(){
    struct Node *ptr;
    ptr = head;
    int count=0;
    while(ptr!=NULL){
        ptr = ptr->next;
        count++;
    }
    printf("The number of nodes are :  %d", count);
}

void search(){
    struct Node *ptr;
    ptr = head;
    int a, count=0, flag=0;
    printf("Enter data to be searched: ");
    scanf("%d", &a);

    while(ptr!=NULL){
        count++;
        if(ptr->data == a){
            printf("Data found at index %d", count);
            flag=1;
            break;
        }
        ptr = ptr->next;
    }

    if(flag == 0){
        printf("Data not found.");
    }
}

void insert_first(){
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    new->next = head;
    head = new;
}

void insert_last(){
    struct Node *ptr, *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = new;
    new->next = NULL;
}

void insert_pos(){
    struct Node *ptr, *new;
    int pos, count=1;
    printf("Enter position: ");
    scanf("%d", &pos);
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    ptr = head;
    while(ptr!=NULL && count !=pos-1){
        ptr = ptr-> next;
        count++;
    }
    new->next = ptr->next;
    ptr->next = new;
}

void del_first(){
    struct Node *ptr;
    ptr = head;
    if(head == NULL){
        printf("Not possible.");
    }
    else{
        head = head->next;
        free(ptr);
    }
}

void del_last(){
    struct Node *ptr, *temp;
    ptr = head;
    while((ptr->next)->next != NULL){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(ptr);
    free(temp);
}

void del_pos(){
    struct Node *ptr, *temp;
    ptr = head;
    int count = 1, pos;
    printf("Enter position: ");
    scanf("%d", &pos-1);
    while(ptr!=NULL && count != pos-1){
        ptr = ptr->next;
        count++;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

int main(){
    int num;
    int t=0;
    while(t!=1){
        printf("\n\n1. Create a Linked List\n2. Display the linked list\n3. Count the number of nodes\n4. Search an element\n5. Insert an element at first\n6. Insert an element at last\n7. Insert an element at a given position");
        printf("\n8. Delete an element at first\n9. Delete an element at last\10. Delete an element at given position\n11. Exit\n\nEnter your choice: ");
        scanf("%d", &num);
        fflush(stdin);

        switch(num){
            case 1:
                create();
                break;
            case 2:
                traverse();
                break;
            case 3:
                count_num();
                break;
            case 4:
                search();
                break;
            case 5:
                insert_first();
                traverse();
                break;
            case 6:
                insert_last();
                traverse();
                break;
            case 7:
                insert_pos();
                traverse();
                break;
            case 8:
                del_first();
                traverse();
                break;
            case 9:
                del_last();
                traverse();
                break;
            case 10:
                del_pos();
                traverse();
                break;
            case 11:
                t=1;
                printf("Exited");
                break;
            default:
                printf("Invalid input.");
        }
    }

    return 0;
}