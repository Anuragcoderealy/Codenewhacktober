#include <iostream>

class Quick
{
public:
    int len;
    int *arr;
    Quick(int len, int arr[])
    {
        this->len = len;
        this->arr = new int[len];
        for (int idx = 0; idx < len; ++idx)
        {
            this->arr[idx] = arr[idx];
        }
    }

    void swap(int idx, int idy)
    {
        this->arr[idx] = this->arr[idx] + this->arr[idy];
        this->arr[idy] = this->arr[idx] - this->arr[idy];
        this->arr[idx] = this->arr[idx] - this->arr[idy];
    }

    int divide(int left, int right)
    {
        int pivot = this->arr[left];
        int l = left, r = right;
        while (l < r)
        {
            while (this->arr[l] <= pivot)
            {
                ++l;
            }
            while (this->arr[r] > pivot)
            {
                --r;
            }
            if (l < r)
            {
                swap(l, r);
            }
        }
        swap(left, r);
        return r;
    }

    void QuickSort(int left, int right)
    {
        if (left < right)
        {
            int p = divide(left, right);
            QuickSort(left, p - 1);
            QuickSort(p + 1, right);
        }
    }
};

// Main
int main()
{
    int i = 0, len;
    std::cout << "\nEnter Length Of Data: ";
    std::cin >> len;
    int arr[len];
    while (i < len)
    {
        std::cin >> arr[i];
        i++;
    }
    std::cout << "\nAfter InsertionSort(): ";
    Quick sorter = Quick(len, arr);
    sorter.QuickSort(0, len - 1);
    i = 0;
    while (i < len)
    {
        std::cout << arr[i] << " ";
        i++;
    }
    return 0;
}