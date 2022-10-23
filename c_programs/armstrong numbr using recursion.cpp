#include<stdio.h>
int armstrong(int);
int main()
{
	int n,ans;
	printf("Enter a three digit number n = ");
	scanf("%d",&n);
     ans=armstrong(n);
     if(ans==n)
     {
     	printf("%d is an armstrong number ",n);
	 }
	   else
	   {
	   	printf("%d is not an armstrong number ",n);
	   }
	
} 
int armstrong(int n)
{
	
	if(n%10!=0)
	return (n%10)*(n%10)*(n%10)+armstrong(n/10);
	else 
	return 0;
}
