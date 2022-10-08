#include <stdio.h>
int Quick_sort(int[],int,int);
int Partition(int[],int,int);
int main()
{
	int A[20],i,n;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter Array elements :\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	Quick_sort(A,0,n);
	printf("Array after sorting.\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
Quick_sort(int A[],int p,int r)
{
	if(p<r)
	{
		int q=Partition(A,p,r);
		Quick_sort(A,p,q-1);
		Quick_sort(A,q+1,r);
	}
	return 0;
}
Partition(int A[],int p,int r)
{
	int x=A[r];
	int i=p-1,t,flag=0;
	for (int j=p;j<r;j++)
	{
		if(A[j]<=x)
		{
			flag=1;
			i+=1;
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
	}
	if (flag==1)
	{
		t=A[i+1];
		A[i+1]=A[r];
		A[r]=t;
		return i+1;
	}
	return r;
}