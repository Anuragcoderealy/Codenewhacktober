#include <iostream>

void merge(int arr[], int low, int mid, int high)
{
    int out[(high - low) + 1];
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            out[k] = arr[i];
            i++;
        }
        else
        {
            out[k] = out[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        out[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        out[k] = arr[j];
        j++;
        k++;
    }
    int c = low;
    k = 0;
    while (k < (high - low) + 1)
    {
        arr[c] = out[k];
        c++;
        k++;
    }
}

void MergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    return;
}

int main()
{
    int arr[5] = {4, 3, 2, 1, 5};
    MergeSort(arr, 0, 4);
    int index = 0;
    while (index <= 4)
    {
        std::cout << arr[index] << " ";
        index++;
    }
    return 0;
}