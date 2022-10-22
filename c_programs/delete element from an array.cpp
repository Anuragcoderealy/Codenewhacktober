#include<stdio.h>
int main()
{
	int arr[100],position,c,n;
	printf("enter number of elements in an array");
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		printf("enter number =");
		scanf("%d",&arr[c]);
	}
	printf("enter location from where you want to delete element from =");
	scanf("%d",&position);
	if(position>n+1)
	 printf("deleting element is not possible");
	else
	{
		for(c=position-1;c<n-1;c++)
		arr[c]=arr[c+1];
		printf("resultant array is =");
		for(c=0;c<n-1;c++)
		printf("%d",arr[c]);
	}
}
