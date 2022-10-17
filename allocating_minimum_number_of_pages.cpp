


//C++ program for minimum number of page allocation
#include<bits/stdc++.h>
using namespace std;

//function to find sum of array
int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++ )
    {
        sum=sum+arr[i];
    }
    return sum;
}

//function to find maximum element of array
int maxarr(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
//function to check whether page allocation is feasible or not

bool isFeasible(int arr[],int k, int res,int n)
{
    int s=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>res)
        {
            s++;
            sum=arr[i];

        }
        else{
            sum=sum+arr[i];
        }
    }
    return (s<=k);
}

//function to find minimum pages using algorithm similar to binary search
int minpages(int arr[],int k,int n)
{
    int min=maxarr(arr,n);
    int max= sum(arr,n);
    int res=0;

    //traverse until min<=max
    while(min<=max)
    {
        
        int mid=(min+max)/2;
        if(isFeasible(arr,k,mid,n))
        {
            
            res=mid;
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return res;
}

int main()
{
    int arr[]={12,34,67,90};
    int n=sizeof arr/sizeof arr[0];
    int m=2;
    cout<<"Minimum number of pages:"<<minpages(arr,m,n);
    return 0;

}
