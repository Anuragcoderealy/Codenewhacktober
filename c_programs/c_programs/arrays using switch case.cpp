#include<stdio.h>
int main()
{
	/* ARRAYS USING SWITCH-CASE*/
	int a[10],i,ch,s=0,c1=0,c2=0;
	printf("Enter 10 numbers=");
	for(i=0;i<10;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n 1.SUM OF ARRAY");
	printf("\n 2.COUNT EVEN AND ODD ELEMENTS FROM ARRAY");
	printf("\n 3.SUM OF POSITIVE AND NEGATIVE VALUES IN ARRAY");
	printf("\n Enter your choice");
	scanf("%d",ch);
	switch(ch)
	{
	   case 1:
	      for(i=0;i<10;i++)
	        s=s+a[i];
	        printf("\n sum of array = %d",s);
	         break;
	     case 2:
	     for(i=0;i<10;i++)
	      {
	          if(i%2==0)      	
	      	   c1++;
	      	   else
	      	  c2++;
		  }
	   printf("\n Even = %d\n Odd = %d",c1,c2);
	    break;
	
	      case 3:
	           for(i=0;i<10;i++)
	             {
	             	if(a[i]>0)
	             	    c1=c1+a[i];
	             	else if(a[i]<0)
	             	  c2=c2+a[i];
	             	
				 }
	     printf("\n Positive = %d\n Negative = %d",c1,c2);
		break;
		default:
		printf("invalid choice");
	}
	
}
