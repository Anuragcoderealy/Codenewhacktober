#include<stdio.h>
typedef struct complex {
    int real;
    float imag;
}c;
c n1,n2,temp;

void add(c*a1,c*a2)
{
    temp.real = a1->real + a2->real;
    temp.imag = a1->imag + a2->imag;
    printf("Sum = %d +%.2fi",temp.real,temp.imag);
}
int main()
{
    printf("For 1st complex number \n"); 
    printf("Enter real and imaginary part respectively: \n"); 
    scanf("%d %f", &n1.real, &n1.imag); 
    printf("\nFor 2nd complex number \n"); 
    printf("Enter real and imaginary part respectively: \n"); 
    scanf("%d %f", &n2.real, &n2.imag); 
    add(&n1,&n2); 
    return 0 ;
}