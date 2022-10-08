#include<stdio.h>
    int stack[5], size=5, top=-1;
    void push (int);
    void pop();
    void peak();
    void display();
int main(){
    int c=0,n;
    printf("Make a choice: \n 1. Push 2. Pop 3. Peek 4. Display\n");
    do
    {
        printf("Enter the choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
              printf("Enter the number to pushed :");
              scanf("%d",&n);
              push(n);
              break;
            case 2:
              pop();
              break;
            case 3:
              peak();
              break;
            case 4:
              display();
              break;
            case 0:
              printf("Exit");
              break;
            default :
            printf("Warning! wrong choice \n");        
        }
    }while(c!=0);
   
    return 0;
}
void push(int n)
{
    if(top>=(size-1))
    printf("Warning! stack Overflow\n");
    else
    {
        ++top;
        stack [top]=n;
    }
}

void pop()
{
    if(top <= -1)
      printf("Warning! stack is underflow\n");
    else
    {
      printf("Element is popped. Element : %d\n",stack[top]);
      --top;
    }
}

void peak()
{
    if(top!=-1)
      printf("The topmost element : %d\n",stack[top]);
    else
      printf("Nothing to peak. \n");
}

void display()
{
    int i;
    if(top>=0)
    {
        printf("The elements in the stack are :\n");
        for(i=top; i>=0; i--)
        printf("%d\n",stack[i]);
    }
    else
    printf("Stack is empty!\n");
}