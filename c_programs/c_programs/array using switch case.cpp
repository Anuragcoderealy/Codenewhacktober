#include<stdio.h>
int main()
 /*ARRAYS USING SWITCH CASE*/
{
	int a[10],c1=0,c2=0,ch,i;
	printf("\nEnter 10 elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("\n 1. SUM OF ARRAY = ");
	 printf("\n 2. COUNT EVEN AND ODD ELEMENTS FROM ARRAY");
	 printf("\n 3. SUM OF POSITIVE AND NEGATIVE ELEMENTS IN AN ARRAY");
	 printf("\nEnter your choice = ");
	 scanf("%d",&ch);
	
	   switch(ch)
	   {
	   	 case 1:
	   	   printf("sum of array is");
	   	    for(i=0;i<10;i++)
	   	      c1=c1+a[i];
	   	       printf("sum of array elements is %d",c1);
	   	       break;
	   	 case 2:
	   	 	printf("even and odd elements from array ");
	   	 	 for(i=0;i<10;i++)
	   	 	  {
	   	 	  	if(a[i]%2==0)
	   	 	  	   c1++;
	   	 	  	else
	   	 	  	  c2++;
				  }
	   	 	printf("\n even=%d \n odd=%d",c1,c2);
	          break;
	   	  case 3:
	   	  	printf("count positive and negative elements in array");
	   	  	for(i=0;i<10;i++)
	   	  	{
	   	  		if(a[i]>0)
	   	  		  c1=c1+a[i];
	   	  		else if(a[i]<0)
	   	  		   c2=c2+a[i];
	   	  		    
				 }
		
				printf("\n positive=%d \n negative=%d",c1,c2);
				break;
				default:
				printf("invalid choice");
				break; 
	   }
}
