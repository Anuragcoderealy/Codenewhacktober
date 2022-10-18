#include<iostream>
using namespace std;

template <class T,class T1=int>
void Array(T (&a)[10] ,T1 n)
{
    T temp=a[0];
    T temp1=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>temp){
            temp=a[i];
        }
        if(a[i]<temp1){
            temp1=a[i];
        }
    }
    cout<<"Maximum element of array : "<<temp;
    cout<<endl<<"Minimum element of array : "<<temp1<<endl;
}

int main()
{
    int arr[10];
    int n,n1,n2,i;
    cout<<"Enter the size of Integer array : ";
    cin>>n;
    cout<<"Enter the elements of  Integer array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Array(arr,n);

    char arr2[10];
    cout<<"Enter the size of char array : ";
    cin>>n2;
    cout<<"Enter the elements of  char array : ";
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    Array(arr2,n2);


    double arr1[10];
    cout<<"Enter the size of Float array : ";
    cin>>n1;
    cout<<"Enter the elements of  Float array : ";
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    Array(arr1,n1);

    
    return 0;
}