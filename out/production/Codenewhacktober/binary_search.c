#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n, i, x, flag = 0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    int start = 0, end = n - 1; // searching starts from start variable to end variable
    while (start <= end)        // loop for searching
    {
        int mid = start + (end - start) / 2; // calculating middle element of the search
        if (arr[mid] == x)                   // if search element is found
            flag = mid;
        if (arr[mid] > x) // if mid element is greater than element to be searched
            end = mid - 1;
        else // if mid element is smaller than element to be searched
            start = mid + 1;
    }
    if (flag == 0)
        printf("Element not found");
    else
        printf("Element found at index %d", flag);
    getch();
}
