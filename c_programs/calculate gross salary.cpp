#include<stdio.h>
int main()
{
 float basic_salary,dearness_allowance,houserent_allowance,gross_salary;
 printf("Enter basic salary of person\n");
 scanf("%f",&basic_salary);
   dearness_allowance=(40*basic_salary)/100;
   houserent_allowance=(20*basic_salary)/100;
	gross_salary=(basic_salary+dearness_allowance+houserent_allowance);
	
	printf("gross_salary of person is %f\n",gross_salary);
}










