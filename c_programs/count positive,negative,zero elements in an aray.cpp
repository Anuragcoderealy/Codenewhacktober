#include<stdio.h>
int main()
{
	int a[10],n,i,posi=0,neg=0,zero=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter array element\n");
		scanf("%d",&a[i]);
	}
	printf("Array elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		   posi++;
		else if(a[i]<0)
		    neg++;
		    else
		       zero++;
	}
	printf("positive numbers=%d",posi);
	printf("negative number=%d",neg);
	printf("zero numbers=%d",zero);
}
