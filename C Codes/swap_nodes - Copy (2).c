#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *create(struct node *head,int i){
    struct node *ptr;
    ptr=(struct node *) malloc(sizeof(struct node));
    struct node *p;
    printf("Enter value[%d] of list:",i);
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
        p=head;
        return(head);
    }
    else{
        p->next=ptr;
        p=ptr;
        return(head);
    }
}
void swap_node(struct node **ptr,int x,int y){
    if(x==y){
        return;
    }
    struct node *currx=*ptr,*prevx=NULL;
    while(currx&&currx->data!=x){
        prevx=currx;
        currx=currx->next;
    }
    struct node *curry=*ptr,*prevy=NULL;
    while(curry&&curry->data!=y){
        prevy=curry;
        curry=curry->next;
    }
    if(currx==NULL||curry==NULL){
        return;
    }
    if(prevx!=NULL){
        prevx->next=curry;
    }
    else{
        *ptr=curry;
    }
    if(prevy!=NULL){
        prevy->next=currx;
    }
    else{
        *ptr=currx;
    }
    struct node *p=curry->next;
    curry->next=currx->next;
    currx->next=p;
}
void print(struct node *ptr){
    int i=1;
    while(ptr!=NULL){
        printf("Value at Node[%d]:%d\n",i,ptr->data);
        i++;
        ptr=ptr->next;
    }
}
int main(){
    int i,n,data,pos;
    printf("Enter size of linked list:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        head=create(head,i+1);
    }
    print(head);

    int x,y;
    printf("Enter which number for swapping from linked list:\n");
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    swap_node(&head,x,y);
    print(head);
    return 0;
}