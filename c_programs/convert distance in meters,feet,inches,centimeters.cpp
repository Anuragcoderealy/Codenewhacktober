#include<stdio.h>
int main()
{
	int d;
	printf("enter the distance in kms");
	scanf("%d",&d);
	printf("the distance in meters = %d\n",d*1000);
	printf("the distance in feet = %d\n",d*3281);
	printf("the distance in inches = %d\n,d*39370");
	printf("the distance in centimeter = %d\n",d*100000);
}
