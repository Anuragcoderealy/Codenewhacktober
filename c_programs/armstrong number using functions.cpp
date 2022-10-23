#include<stdio.h>
void armstrong ()

{
	int num,sum=0,r,original_number;
	printf("Enter a number");
	scanf("%d",&num);
	original_number=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r*r*r;
		num=num/10;
	}
	printf("new number is %d",num);
	if(sum=num)
	  {
	  	printf("number is armstrong\n");
	  }
	else
	{
	  printf("number is not armstrong\n");	
	}
void armstrong();
void main()
{
  
  armstrong();       //function call
}

