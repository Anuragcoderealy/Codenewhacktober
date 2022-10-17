#include<iostream>
using namespace std;

class NUM{
    protected:
    int x,y;
    public:
    void getdata(){
        cout<<"Enter two integer values : ";
        cin>>x>>y;
    }
};

class Product:public NUM{
    public:
    void Multiply(){
        getdata();
        cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    }
};

class SUM:public NUM{
    public:
    void Addition(){
        getdata();
        cout<<"Addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
    }
};

class Subtract:public NUM{
    public:
    void Difference(){
        getdata();
        cout<<"Difference between "<<x<<" and "<<y<<" is "<<x-y<<endl;
    }
};

int main(){
    Product p;
    SUM s;
    Subtract d;
    p.Multiply();
    s.Addition();
    d.Difference();
    return 0;
}