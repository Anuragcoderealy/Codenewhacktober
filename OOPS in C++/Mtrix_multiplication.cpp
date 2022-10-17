#include<iostream>
using namespace std;

template <class T,class T1=int >
void Array(T (&a)[10][10],T (&b)[10][10] ,T1 n)
{
    T c[10][10];
    T sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
			{
			sum+=a[i][k]*b[k][j];
		    }
		    c[i][j]=sum;
		    sum=0;
        }
    }
    cout<<"Product of the matrices :\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
    int arr[10][10],arr1[10][10];
    int n,n1,n2,i,j;
    cout<<"Enter the size of Integer array : ";
    cin>>n;
    cout<<"Enter the elements of  1st Integer array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of  2nd Integer array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    Array(arr,arr1,n);


    double arr2[10][10],arr3[10][10];
    cout<<"Enter the size of Float array : ";
    cin>>n1;
    cout<<"Enter the elements of  1st Float array : "<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"Enter the elements of  2nd Float array : "<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr3[i][j];
        }
    }
    Array(arr2,arr3,n1);

    
    return 0;
}
