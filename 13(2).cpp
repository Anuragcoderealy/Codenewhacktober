#include<stdio.h>
#include<string.h>
int main(){
    int i,spaces=0;
    char str[100];
    printf("Enter a sentence to know the white spaces in that sentence: \n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            spaces++;
        }
    }
    printf("\n%d Spaces are present in that sentence.",spaces);
    return 0;
}
