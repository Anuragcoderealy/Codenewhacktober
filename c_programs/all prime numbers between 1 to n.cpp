#include<stdio.h>
int main()
{
	int num,i,dividend,n;
	printf("enter maximum range");
	scanf("%d",&n);
	for(num=1;num<=n;num++)
	{
		dividend=0;
		for(i=2;i>=num/2;i++)
		{
			if(num%i==0)
			{
			  dividend++;
				break;
			}
		}
		if (dividend==0 && num!=1)
		  printf("%d\t",num);
	}
}
