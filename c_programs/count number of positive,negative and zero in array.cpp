#include<stdio.h>
int main()
{
	int a[10],i,n,posi,neg,zero;
	printf("COUNT THE NUMBER OF POSITIVE,NEGATIVE,ZERO ELEMENT IN AN ARRAY");
	printf(" \n Enter the number of elements = ");
	scanf("\n %d",&n);
	
		for(i=0;i<n;i++)
	{
		printf("\nEnter the element =\n");
		
		scanf("%d",&a[i]);
	}
	printf("\n Array elements are\n");
	for(i=0;i<n;i++)
{
	printf("\n%d",a[i]);
}
     for(i=0;i<n;i++)
     {
     	if(a[i]>0)
     	 posi=a[i];
     	else if(a[i]<0)
     	neg=a[i];
     	else
     	zero=a[i];
	 }
	 printf("\n positive elements are = %d ",posi);
	 printf("\n negative elements are = %d ",neg);
	 printf("\n zero elements are = %d",zero);
}
