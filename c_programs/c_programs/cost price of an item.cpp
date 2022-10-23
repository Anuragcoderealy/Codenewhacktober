#include<stdio.h>
int main()
{
	float s,p,c;
	printf("Enter the selling price of 15 items = \n");
	scanf("%f",&s);
	printf("Enter the profit of 15 items = \n");
	scanf("%f",&p);
	/* CALCULATE COST PRICE OF ITEM */
	
	c=(s-p)/15;
	printf("The cost price of an item is %f",c);
	
}
