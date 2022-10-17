#include<iostream>
using namespace std;

class student
{
    protected:
    int roll;
    string name;
    public:
    student(int roll_no,string Name):roll(roll_no),name(Name){}
    void putstudent()
    {
        cout<<"Roll no : "<<roll<<endl;
        cout<<"Name of student : "<<name<<endl;
    }
};
class marks
{
    protected:
    int credit_earn;
    public:
    marks(int credit):credit_earn(credit){}
    void putmarks()
    {
        cout<<"Credit Earn = "<<credit_earn<<endl;
    }
};
class credit_course
{
    protected:
    int no,credit;
    public:
    credit_course(int number, int Credit):no(number),credit(Credit){}
    void put_credit()
    {
        cout<<"Number of courses taken : "<<no<<endl;
        cout<<"Credit each course has : "<<credit<<endl;
    }
};
class result :public student, public marks, public credit_course
{
    int credit_e;
    public:
    result(int a, int b, int c,int d,string s) : student(a,s), marks(b) ,credit_course(c,d){ }
    void put_result()
    {
        cout<<"--------------------"<<endl;
        putstudent();
        putmarks();
        put_credit();
        credit_e = no*credit;
        if(credit_earn == 166 && credit_e>=20)
        {
            cout<<"Passed with Honour Degree"<<endl;
        }
        else if(credit_earn == 166 && credit_e<20)
        {
            cout<<"Passed"<<endl;
        }
        else{
            cout<<"Failed"<<endl;
        }
    }
};
int main()
{
    int a,b,c,d;
    string str;
    cout<<"Enter Name of student : ";
    cin>>str;
    cout<<"Enter Roll No of student : ";
    cin>>a;
    cout<<"Enter credit earn in btech : ";
    cin>>b;
    cout<<"Enter no ofcredit courses taken : ";
    cin>>c;
    cout<<"Enter credit : ";
    cin>>d;
    result r(a,b,c,d,str);
    r.put_result();
    return 0;
}    