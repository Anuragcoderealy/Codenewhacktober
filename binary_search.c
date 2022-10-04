#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n,i,j,k,x,flag=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at index %d",i);
    }
    else
    {
        printf("Element not found");
    }
    getch();
}
