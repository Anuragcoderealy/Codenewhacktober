#include<stdio.h>
int main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	   printf("it is uppercase letter \n lowercase letter %c",c+32);
	  else if(c>='a' && c<='z')
	     printf("it is lowercase letter \n uppercase letter %c",c-32);
	     else
	       printf("invalid choice");
}
