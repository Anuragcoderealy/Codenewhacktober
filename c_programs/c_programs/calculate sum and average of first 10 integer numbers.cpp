#include<stdio.h>
int main()
{
	int i,sum=0;
	float avg;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	for(i=1;i<=10;i++)
	avg=sum/10;
	
	printf("sum =%d\n",sum);
	printf("avg =%d\n",avg);
}
