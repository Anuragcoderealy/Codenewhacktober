#include<stdio.h>
int main()
{
	int physics,chemistry,maths,english,computer;
	float total,per;
	printf("Enter the marks of physics = \n");
	scanf("%d",&physics);
	printf("Enter the  marks of chemistry = \n");
	scanf("%d",&chemistry);
	printf("Enter the marks of maths = \n");
	scanf("%d",&maths);
	printf("Enter the marks of english = \n");
	scanf("%d",&english);
	printf("Enter the marks of computer = \n");
	scanf("%d",&computer);
	total=physics+chemistry+maths+english+computer;
	per=total/5.0;
	printf("Aggregate percentage is %f",per);
	
}
