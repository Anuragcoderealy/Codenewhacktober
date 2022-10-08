#include <stdio.h>
int Selection_sort(int[],int);
int Minimum(int[],int,int);
int main()
{
	int A[20],i,n;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter Array Elements.\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	Selection_sort(A,n);
	return 0;
}
Selection_sort(int A[],int e)
{
	int c=0,i,k,min;
	for (i=0;i<e;i++)
	{
		min=Minimum(A,c,e);
		int t=A[c];
		A[c]=A[min];
		A[min]=t;
		c++;
		printf("Array after %d pass:\n",i+1);
		for (k=0;k<e;k++)
		{
			printf ("%d\t",A[k]);
		}
		printf("\n");
	}
	printf("Array after Sorting:\n");
	for (i=0;i<e;i++)
	{
		printf ("%d\t",A[i]);
	}
	return 0;
}
 Minimum(int A[],int s,int e)
{
	int min=A[s],i,j=s;
	for (i=s+1;i<e;i++)
	{
		if(min>A[i])
		{
			min=A[i];
			j=i;
		}
	}	
	return j;
}