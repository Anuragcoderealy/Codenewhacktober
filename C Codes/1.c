#include<stdio.h>

int main(){
    int x=5;
    int *j;
    j = &x;
    printf("%d %d %d\n",j,&x,x);
    printf("%d %d %d\n",*j,*&x,&j);
    return 0;
}