#include<stdio.h>
int main()
	{
	int num,orig,newnum=0,r=0;
	printf("Enter a number");
	scanf("%d",&num);
	orig=num;
	while(num!=0)
	{
		r= num%10;
		newnum=newnum+r*r*r;
		num=num/10;
	}
	printf("new number is%d",newnum);
	 if(newnum==orig)
	 {
	 	printf("number is armstrong");
	 }
      else
      	{
      		printf("number is not armstrong");
		  }
	  
	 
	 
	 
	 
	 
}



