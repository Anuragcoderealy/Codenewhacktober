#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=4;i++)
	{
		  ch='A';
		for(j=1;j<=7;j++)
		{
			if(j<=5-i||j>=3+i)
			{
			  printf("%c",ch);
			  j<4?ch++:ch--;
		    }
		     else
		     {
		     	printf(" ");
		          if(j==4)
		     	ch--;
			 }
	    }
	    printf("\n");
}
}
