#include<stdio.h>
void average(void);
void main()
{
	int a,b,c,d,e,sum;
	float average;
	printf("Enter 5 numbers");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	printf("Average is %f",average);
	
}
 void average(void)
{
	int a,b,c,d,e;
	float sum,avg;
	sum=a+b+c+d+e;
	avg=(a+b+c+d+e)/5;
}

