#include<stdio.h>
 typedef struct Distance {
    int feet;
    float inch;
}s;
s d1,d2,result;
void add(s a1, s a2)
{
    result.feet = a1.feet+a2.feet;
    result.inch = a1.inch+a2.inch;
    while(result.inch >= 12.0) 
{
    result.inch = result.inch - 12.0;
    result.feet++;
}
printf("\nSum of distances = %dfeet %.0finch", result.feet, result.inch);
}
int main()
{
    printf("Enter 1st distance\n");
    printf("Enter feet:");
    scanf("%d",&d1.feet);
    printf("Enter inch:");
    scanf("%f",&d1.inch);
    printf("\nEnter 2nd distance\n");
    printf("Enter feet:");
    scanf("%d",&d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);
    add(d1,d2);
    return 0;
}