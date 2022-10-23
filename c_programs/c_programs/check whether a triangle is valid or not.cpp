#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b<=c)&&(a+c<=b)&&(b+c<=a))
	   printf("triangle is valid");
	else
	  printf("triangle is invalid");
}
