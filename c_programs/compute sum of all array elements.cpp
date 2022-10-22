#include<stdio.h>
int main()
{
	int a[10]={11,22,36,15,2};
	int sum=0,*p;
	p=&a;
	for(p=&a[0];p<=&a[4];p++)
	  sum=sum+*p;
	printf("sum is %d",sum);
}
