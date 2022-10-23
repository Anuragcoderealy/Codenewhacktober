#include<stdio.h>
int main()
{
	/* CALCULATE AGE OF A PERSON */ 
	int cy,by,week,age,hrs;
	printf("Enter the birth year = ");
	scanf("%d",&by);
	printf("Enter the current year = ");
	scanf("%d",&cy);
	age=cy-by;
	printf("Age of person is %d",age);
	week=(age*365)/7;
	printf("\n Age in week is = %d \n",week);
	hrs=week*7*24;
	printf(" \nAge in hours is = %d \n",hrs);
	
	
}
