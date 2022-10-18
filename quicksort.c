#include<stdio.h>
int partition(int a[],int start ,int end)
{
    int pivot,i,j,temp;
    pivot=a[end];
    i=start-1;
    for(j=start;j<end;j++)
    {
        if (a[j]<pivot) //i++ ->> swap a[i] with a[j]
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    } //end of loop , now swapping to get the pivot at the right position
    temp=a[i+1];
    a[i+1]=a[end];
    a[end]=temp;
    return (i+1);
    
}
int quicksort(int a[],int start , int end )
{
    int p;
    if (start<end)
    {
        p=partition(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
    }
}
int main()
{
    int arr[100],i,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Sorted Array\n");
     for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}