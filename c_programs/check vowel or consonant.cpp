#include<stdio.h>
int main()
{
	char c;
	int uppercase_vowel,lowercase_vowel;
	printf("Enter a character");
	scanf("%c",c);
	uppercase_vowel=(c=='a'||c=='e'||c ='i'||c=='o'||c=='u');
    lowercase_vowel=(c=='A'||c=='E'||c=='I'||c='O'C=='U');
	 if(uppercase_vowel||lowercase_vowel)
         printf("vowel");	
		else
	        printf("consonant");
}

