#include<stdio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=3;i++)
	{
	  k='A';
	 for(j=1;j<=3;j++)
	 {
	 
		if(j<=i)
		printf("%c",k);
		k++;
	}
		else
		 printf(" ");
		
		
	}
	printf("\n");
}
}
