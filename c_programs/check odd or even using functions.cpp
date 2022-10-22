#include<stdio.h>
/*takes nothing returns nothing function type  odd and even number function*/  
void oddeven(void);
int main()
{
	oddeven();
}
void oddeven(void)
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a%2==0)
	  printf("even number",a);
	else
	  printf("odd number",a);
}

