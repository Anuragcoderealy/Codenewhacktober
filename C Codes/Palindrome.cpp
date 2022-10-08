#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
    int i, l;
    int flag = 0;
    printf("Enter any string:");
    scanf("%s", string);
    
    l = strlen(string);
    
    for(i=0; i<l ; i++)
	{
    if(string[i] != string[l-i-1])
    {
    flag = 1;
    break;
    }
    }
    if(flag==1)
	{
	printf("it is not a Palindrome.");
    }  
	else
	{
	printf("it is a palindrome.");
	}
	return 0;
}