#include<stdio.h>
int area(int l,int b);
int main()
{
	int l,b;
	printf("Enter the length\n");
	scanf("%d",&l);
	printf("Enter the breadth\n");
	scanf("%d",&b);
	rectangle=area(l,b);
	printf("Area of rectangle = %d",rectangle);
	
}
 int area(int l,int b)
{
	int area;
	area=l*b;
	return(area);
}

