#include<stdio.h>
//program to demonstrate the use of functions in c 
void add(int x,int y);  //function prototype
int main()
{
 int x,y;	
	printf("Enter ywo numbers");
	scanf("%d%d",&x,&y);
	add(x,y);   //function call
}
void add(int a,int b)
{
	int c;
	c=a+b;          //function definition
	printf("sum is %d",c);
	return c;
}
