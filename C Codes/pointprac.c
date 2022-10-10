#include<stdio.h>

int main(){
    int i=5;
    // int *j;
    int j;
    j=&i;
    // j=6;
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",&i);
    printf("%u\n",j);
    return 0;
}