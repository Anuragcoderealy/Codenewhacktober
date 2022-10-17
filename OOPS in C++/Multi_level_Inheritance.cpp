#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    string dob;
    int addhar_no;
    public:
    void getdata(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter addhar No. :";
        cin>>addhar_no;
        cout<<"Enter date of birth : ";
        cin.ignore();
        getline(cin,dob);
    }
};

class student :public Human{
    protected:
    int admission_year;
    int rollno;
    public:
    void getstudent(){
        getdata();
        cout<<"enter Admission year : ";
        cin>>admission_year;
        cout<<"enter roll no of student : ";
        cin>>rollno;
    }
};

class college_student : public student{
    string college_name;
    float SGPA;
    int passing_out;
    public:
    void getcollege_student(){
        getstudent();
        cout<<"Enter name of Institute : ";
        cin.ignore();
        getline(cin,college_name);
        cout<<"Enter aggregate SGPA : ";
        cin>>SGPA;
        cout<<"Enter the passing out year : ";
        cin>>passing_out;
    }
    void putcollege_student(){
        cout<<"Name of student : "<<name;
        cout<<endl<<"DOB of student : "<<dob;
        cout<<endl<<"Addhar No. of Student : "<<addhar_no;
        cout<<endl<<"Roll No. of student : "<<rollno;
        cout<<endl<<"Institue Name : "<<college_name;
        cout<<endl<<"Admisssion year : "<<admission_year;
        cout<<endl<<"Passing out year : "<<passing_out;
        cout<<endl<<"Aggregate SGPA : "<<SGPA;
    }
};

int main(){
    college_student s1;
    s1.getcollege_student();
    s1.putcollege_student();
    return 0;
}