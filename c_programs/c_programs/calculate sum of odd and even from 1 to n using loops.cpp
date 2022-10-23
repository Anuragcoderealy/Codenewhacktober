#include<stdio.h>
int main()
{
	int n,i,j,sumo,sume;
	printf("enter the value of n=");
	scanf("%d",&n);
	printf("odd numbers are \n");
	for(i=1;i<=n;i=i+2)
	{
		printf("%d \t",i);
		sumo=sumo+i;
	}
	printf("\n %d",sumo);
	 printf("even numbers are \n");
	for(j=2;j<=n;j=j+2)
	   {
	   	printf("%d \t",j);
	   	sume=sume+j;
	   }
	printf("\n %d",sumo);
}
