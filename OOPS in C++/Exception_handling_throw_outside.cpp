#include<iostream>
using namespace std;

void divide(int a,int b ){
    if(a==0){
        throw(a);
    }
    cout<<"b/a = "<<b/a<<endl;
}

void factorial(long int a){
    if(a<0){
        throw(a);
    }
    int i=a;
    int fact=1;
    while(i>1){
        fact=fact*i;
        i--;
    }
    cout<<"Factorial of "<<a <<" is "<<fact;
}

void Apply_for_voterId(int a){
    if(a<18){
        throw(a);
    }
    cout<<"Please Attach your Passport size Photo ,address proof ,copy of age proof ,identity proof at desired location "<<endl;
    cout<<"Download your Voter_Id"<<endl;
}

int main()
{
    int Denominator,Numerator;
    cout<<"Enter Denominator and Numerator : ";
    cin>>Denominator>>Numerator;
    try{
        divide(Denominator,Numerator);
    }

    catch(int i){
        cout<<"Divide by 0 exception because denominator is "<<i<<endl;
    }
    long int n;
    cout<<"Enter a number : ";
    cin>>n;
    try{
        factorial(n);
    }
    catch(long int i){
        cout<<"Factorial of Negative Number Exception because number is "<<i;
    }
    int age;
    cout<<endl<<"Enter your age : ";
    cin>>age;
    try{
        Apply_for_voterId(age);
    }
    catch(int a){
        cout<<"You are not eligible for Voter Id because your age is "<<a;
    }
    return 0;
}