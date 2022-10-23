#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size],i,arr1[size],counter =0;
    cout<<"Enter the elements of array :";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            arr1[counter++]=arr[i];
        }
    }
    while(counter < size)
    {
        arr1[counter] = 0;
        counter ++;
    }

    for(i=0;i<size;i++)
    {
        cout << arr1[i] <<" ";
    }

    return 0;
}
