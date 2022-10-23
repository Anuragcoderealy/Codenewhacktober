#include<stdio.h>
//demonstrate the use of call by reference using functions
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two values");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping a=%d,b=%d ,a,b");
	
}
void swap(int*p,int*q)
{
	int *p,*q,r;
	r=*p;
	*p=*q;
	*q=r;
}

