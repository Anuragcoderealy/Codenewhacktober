#include<iostream>
using namespace std;

class student{
	int roll;
	string name;
	public:
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
};

class marks : public student
{
	protected:
	int p,c,m;
	public:
		void getstudent()
		{
			cout<<"hi ";
			student::getstudent();
		}
		void getmarks()
		{
			cout<<"Enter physics , chemistry , mathematics : ";
			cin>>p>>c>>m;
		}
		void putmarks()
		{
			cout<<"Marks of Physics : "<<p<<endl;
			cout<<"Marks of Chemistry : "<<c<<endl;
			cout<<"Marks of Mathematics : "<<m<<endl;
		}
		void putstudent()
		{
			cout<<"hi ";
			student::putstudent();
		}
	
};

class sports : public student{
	protected:
		int s;
	public :
		void getstudent()
		{
			cout<<"hi ";
			student::getstudent();
		}
		void getsports()
		{
			cout<<"Enter sports marks : ";
			cin>>s;
		}
		void putsports()
		{
			cout<<"Sports marks : "<<s<<endl;
		}
};

class result : public sports, public marks{
	int total,gtotal;
	public :
		void getresult()
		{
			marks::getstudent();
			getmarks();
			getsports();
			cout<<"-----Result----- "<<endl;
			total=p+c+m;
			gtotal=total+s;
			marks::putstudent();
			putmarks();
			putsports();
			cout<<"Total in physics ,chemistry and mathematics = "<<total<<endl;
			cout<<"Grand Total(Theory marks + Sports Marks) = "<<gtotal<<endl;
		}
};

int main()
{
	result r;
	r.getresult();
	return 0;
}
