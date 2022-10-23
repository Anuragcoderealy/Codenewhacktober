#include<stdio.h>
int main()
{
	int m1[10][10],m2[10][10],m3[10][10],m,n,i,j,addition;
	printf("Enter number of rows = ");
	scanf("%d",&m);
	printf("Enter number of columns = ");
	scanf("%d",&n);
    printf("Enter elements of first matrix= \n");	
	 for(i=0;i<m;i++)
     {
     	for(j=0;j<n;j++)
     	{
     	  scanf("%d ",&m1[i][j]);	
		 }
	}
    printf("Enter elements of second matrix = \n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&m2[i][j]);
		}
	}
	printf("Addition of matrices is = ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	printf("ADDITION OF MATRICES IS ",addition);
	 }

