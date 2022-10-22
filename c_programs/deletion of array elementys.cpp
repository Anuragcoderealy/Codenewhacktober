#include<stdio.h>
int main()
{
	int a[100],n,posi,i;
	printf("Enter number of array elements = ");
	scanf("%d",&n);
	 for(i=0;i<=n;i++)
	 {
	 	scanf("\n%d",a[i]);
	 }
    printf("Array elements are = ");
    for(i=0;i<=n;i++)
    {
    	printf("\n%d",a[i]);
	}
	printf("Enter position for deletion = ");
	{
		scanf("%d",&posi);
	}
	for(i=posi-1;i<n;i++)
	{
	   a[i]=a[i+1];	
	}
	printf("Array after deletion = ");
	for(i=0;i<n-1;i++)
	{
		printf("\n%d",a[i]);
	}
}
