#include<stdio.h>
int main()
{
	int m,n,a[10][10],b[10][10],c[10][10],d[10][10],i,j;
	printf("Enter number of rows m = ");
	scanf("%d",&m);
	printf("Enter number of columns n ");
	scanf("%d",&n);
	printf("Marix elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter elements[%d][%d] :",i,j);
			scanf(" %d ",&a[i][j]);
		}
	}
	printf("Matix1:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter elements[%d][%d]:",i,j);
			scanf(" %d ",&b[i][j]);
		}
		
    }
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	
	/* LOGIC FOR ADDITION */
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Addition of matrix is : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	printf("Subtraction of matrix is : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
}

