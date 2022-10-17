#include<iostream>
using namespace std;

class student{
    string name;
    int percentage_12;
    string pref1,pref2,pref3;
    public :
    void getdata()
    {
        cout<<"Enter name of student : ";
        cin>>name;
        cout<<"Enter percentage in class 12th : ";
        cin>>percentage_12;
        cout<<"Enter your 3 preferences for branch : ";
        cin>>pref1>>pref2>>pref3;
    }
    void putdata()
    {
        cout<<"Name of student : "<<name<<endl;
        cout<<"12th percentage : "<<percentage_12<<endl;
        cout<<"Prefernce 1 : "<<pref1;
        cout<<"Prefernce 2 : "<<pref2;
        cout<<"Prefernce 3 : "<<pref3;

    }
};

class college{
    protected:
    int CSE,cse_ai,electrical,civil,mechanical,electronics,it;
    void getdata()
    {
        cout<<"Enter the no. of seats available in cse with ai : ";
        cin>>cse_ai;
        cout<<"Enter the no. of seats available in cse  : ";
        cin>>cse;
        cout<<"Enter the no. of seats available in it : ";
        cin>>it;
        cout<<"Enter the no. of seats available in electronics : ";
        cin>>electronics;
        cout<<"Enter the no. of seats available in electrical : ";
        cin>>electrical;
        cout<<"Enter the no. of seats available in mechanical : ";
        cin>>mechanical;
        cout<<"Enter the no. of seats available in civil : ";
        cin>>civil;
        
    }
};

class allocation : protected student, protected college{
    string seat_allocate;
    public:
    void getdata()
    {
        void student::getdata();
        void college::getdata();
    }
    if(percentage_12 > 90 && cse_ai && pref1==cse_ai)
    {
        seat_allocate=cse_ai;
        cse_ai--;
    }
    elif(percentage_12 > 80 && cse)
    {
        seat_allocate=cse;
        cse--;
    }
    elif(percentage_12 > 75 && it)
    {
        seat_allocate=it;
        it--;
    }
    elif(percentage_12 > 70 && mechanical)
    {
        seat_allocate=mechanical;
        mechanical--;
    }
    elif(percentage_12 > 90 && elctronics)
    {
        seat_allocate=electronics;
        electronics--;
    }
    elif(percentage_12 > 90 && cse_ai)
    {
        seat_allocate=cse_ai;
        cse_ai--;
    }

};