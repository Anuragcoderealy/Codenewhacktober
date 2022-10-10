#include<iostream>
using namespace std;

int fact(int n);

int fact(int n)
{
    int factorial=1;

    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }

    return factorial;
}


int main()
{
    int n,r;
    cout<<"enter the value of n & r  ";
    cin>>n>>r;

    int result= fact(n)/(fact(r)*fact(n-r));

    cout<<" nCr result : "<<result;

    return 0;
}