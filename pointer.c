#include<stdio.h>

int main(){
    int i=34;
    int *j;
    j = &i;
    int k = &i;;
    printf("%d\n",i);
    printf("%d\n",*j);
 
  
    printf("%u\n",&i);
    printf("%u\n",j);
    printf("%u\n",k);
    // printf("%u\n",&j);
    // printf("%u\n",*(&j));
    return 0;
}