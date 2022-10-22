#include<stdio.h>
int cubeofnumber(int);
int main()
{
	int num,c;
	printf("Enter a number : ");
	scanf("%d",&num);
	c=cubeofnumber(num);
	printf("Cube of number = %d",c);
}
int cubeofnumber(int x)
{
	
	return x*x*x;
}
