#include<stdio.h>
int main(){
  int r,c,i,j,m1[i][j],m2[i][j],sum[i][j];
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r;i++)
   for (j = 0; j < c;j++) 
  {
      scanf("%d", &m1[i][j]);
  }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; i++)
   for (j = 0; j < c; j++) 
  {
      scanf("%d", &m2[i][j]);
  }
  printf("Sum of entered matrices: \n");
  for (i = 0; i < r; i++)
   for (j = 0; j < c; j++) 
  {
      sum[i][j] = m1[i][j] + m2[i][j];
      printf(" %d\t", sum[i][j]);
  }
       printf("\n");
    return 0;
 }
