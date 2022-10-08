//various operations on circuular linked lists
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
    new->next = head;
    head = new;
    ptr =  head;
    fflush(stdin);

    while(i!=1){
        printf("Do you want to add another element(Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='Y' || ch=='y'){
            new= (struct Node *)malloc(sizeof(struct Node));
            printf("Enter next value: ");
            scanf("%d", &new->data);
            new->next = head;
            ptr->next = new;
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
    do{
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!=head);
}

void insert_first(){
    struct Node *new, *ptr;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    ptr = head;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    new->next = head;
    ptr->next = new;
    head = new;
}

void insert_last(){
    struct Node *new, *ptr;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &new->data);
    ptr = head;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    new->next = head;
    ptr->next = new;
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

void delete_first(){
    struct Node *ptr, *temp;
    ptr = head;
    if(head == NULL){
        printf("Not possible");
    }
    else{
        while(ptr->next != head){
            ptr = ptr->next;
        }
        temp = head;
        ptr->next = head->next;
        head = head->next;
        free(temp);
    }
}

void delete_last(){
    struct Node *ptr, *temp;
    ptr=head;
    if(head == NULL){
        printf("Not possible");
    }
    else if(head->next == head){
        head = NULL;
        free(head);
    }
    else{
        while((ptr->next)->next != head){
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = head;
        free(temp);
    }
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
    int num, t=0;
    while(t!=1){
        printf("\n\n1. Create a circular linked list.\n2. Display the linked list\n3. Insert element at first position.\n4. Insert element at last positions\n5. Insert element at given position");
        printf("\n6. Delete element at first position\n7. Delete element at last position\n8. Delete element at given position\n9. Exit\n\nEnter your choice: ");
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
                insert_first();
                traverse();
                break;
            case 4:
                insert_last();
                traverse();
                break;
            case 5:
                insert_pos();
                traverse();
                break;
            case 6:
                delete_first();
                traverse();
                break;
            case 7:
                delete_last();
                traverse();
                break;
            case 8:
                del_pos();
                traverse();
                break;
            case 9:
                t=1;
                printf("Exited");
                break;
            default:
                printf("Invalid input.");
        }        
    }

    return 0;
}