#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("output of a :%d\n",a);
    printf("output of b :%d",b);
    return 0;
}
