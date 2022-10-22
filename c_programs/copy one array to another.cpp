#include<stdio.h>
int main()
{
	int a[10],b[10],n,i,j;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
      printf("Enter the array element=");	
		scanf("%d",&a[i]);
	}
	printf("\narray elements are =\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	b[i]=a[i];
  }
   printf("\narray-1 elements are\n");  
    for(i=0;i<n;i++)
     {
     	printf("\n%d",a[i]);
	 }
    printf("\narray-2 elements are\n");
    for(i=0;i<n;i++)
    {
    	printf("\n%d",a[i]);
    	
	}
}
