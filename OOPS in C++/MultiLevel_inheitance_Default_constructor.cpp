#include<iostream>
using namespace std;

class student{
	int roll;
	string name;
	public:
		student()
		{
			cout<<"Default Student Constructor Called"<<endl;
		}
		void getstudent()
		{
			cout<<"Enter roll no of student ; ";
			cin>>roll;
			cout<<"Enter name of student : ";
			cin>>name;
		}
		void putstudent()
		{
			cout<<"Roll no of student ; "<<roll<<endl;
			cout<<"Enter name of student : "<<name<<endl;
		}
		~student()
		{
			cout<<"Default Student Destructor Called"<<endl;
		}
};

class marks : public student
{
	protected:
	int p,c,m,s;
	public:
		marks()
		{
			cout<<"Default Marks Constructor Called"<<endl;
		}
		void getmarks()
		{
			cout<<"Enter physics , chemistry , mathematics : ";
			cin>>p>>c>>m;
			cout<<"Enter sports marks : ";
			cin>>s;
		}
		void putmarks()
		{
			cout<<"Marks of Physics : "<<p<<endl;
			cout<<"Marks of Chemistry : "<<c<<endl;
			cout<<"Marks of Mathematics : "<<m<<endl;
			cout<<"Sports marks : "<<s<<endl;
		}
		~marks()
		{
			cout<<"Default Marks Destructor Called"<<endl;
		}
	
};

class result : public marks{
	int total,gtotal;
	public :
		result(){
			cout<<"Default Result Constructor called"<<endl;
		}
		void getresult()
		{
			getstudent();
			getmarks();
			cout<<"-----Result----- "<<endl;
			total=p+c+m;
			gtotal=total+s;
			putstudent();
			putmarks();
			cout<<"Total Marks in theory (Physics + chemistry + mathematics) = "<<total<<endl;
			cout<<"Grand Total(Theory marks + Sports Marks) = "<<gtotal<<endl;
		}
		~result(){
			cout<<"Default Result Destructor called"<<endl;
		}
};

int main()
{
	result r;
	r.getresult();
	return 0;
}
