#include<stdio.h>
int main()
{
  int c1=0,c2=0;
	char str[10],*p;
	printf("Enter string=");
	gets(str);
	*p==(str);
	while(*p!='\0')
	{
    if(*p=='A',||*p=='E'||*p=='I'||*p=='o'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
		c1++;
		else
		c2++;
	}
      printf("vowel =%d\n consonant=%d",c1,c2);
}
