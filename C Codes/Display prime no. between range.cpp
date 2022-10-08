#include<stdio.h>
int prime(int lower, int upper);
int main()
{
	int lower,upper;
	printf("enter the lower range: ");
	scanf("%d",&lower);
	printf("enter the upper range: ");
	scanf("%d",&upper);
	prime(lower,upper);
	return 0;
}
int prime(int lower,int upper)
{
	while(lower<=upper)
	{
		int f=0;
		for( int i=1;i<=lower;i++)
		{
			if(lower%i==0)
			f++;
		}
		if(f==2)
    	{
    	printf("%d\n",lower);
    	}
    	lower++;
	}
	return 0;
}