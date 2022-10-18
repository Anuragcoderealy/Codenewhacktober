#include<iostream>
using namespace std;

void divide(int a,int b ){
    try{
        if(b<0 || a<0){
            throw(a<0?a:b);
        }
    }
    catch(int i){
        cout<<"Factorial of Negative Number Exception because no. is "<<i<<endl;
        throw(a>0?a:b);
    }
    long int i=a;
    long int fact=1;
    while(i>1){
        fact=fact*i;
        i--;
    }
    long int j=b;
    long int fact1=1;
    while(j>1){
        fact1=fact1*j;
        j--;
    }
    cout<<b<<"!/"<<a<<"! = "<<fact1<<"/"<<fact<<" = "<<fact1/fact<<endl;
}

int main()
{
    int Denominator,Numerator;
    cout<<"Enter denominator factorial no. and numerator factorial number : ";
    cin>>Denominator>>Numerator;
    try{
        divide(Denominator,Numerator);
    }
    catch(int i){
        if(i<0)
        cout<<"Factorial of Negative Number Exception because no. is "<<i<<endl;
    }
    return 0;
}