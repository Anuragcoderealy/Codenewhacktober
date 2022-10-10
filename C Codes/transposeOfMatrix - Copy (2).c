/* Transpose of matrix */


#include <stdio.h>

void main ( )
{
int A[30][30], B[30][30], i, j, m, n;

printf(" Enter no. of rows and columns:\n");
scanf("%d %d",&n,&m);
printf("\nEnter the matrix A \n");
for(i=0;i<=n-1; i++)
{
for(j=0; j<=m-1; j++)
{
     printf("Enter elements:\n");
     scanf ("%d", &A[i][j]);
  }
}
printf("\nTranspose of matrix A is \n");
for (i=0;i<=n-1; i++)
{
for (j=0; j<=m-1; j++)
{
B[i][j]=A[j][i];
printf("%4d",B[i][j]);
}
printf ("\n");
}
}
