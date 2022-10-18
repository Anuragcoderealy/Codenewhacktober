#include<iostream>
using namespace std;

class parent{
	protected:
	    int x;
	public:
		parent()
		{
			cout<<"Parent Constructor Called"<<endl;
			x=0;
		}
		~parent()
		{
			cout<<"Parent Destructor Called"<<endl;
		}
		void show_parent()
		{
			cout<<"x = "<<x<<endl;
		}
};
class child :public parent{
	int y;
	public:
		child()
		{
			cout<<"Child Constructor Called"<<endl;
			y=0;
		}
		~child()
		{
			cout<<"Child Destructor Called"<<endl;
		}
		void show_child()
		{
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	child c;
	c.show_parent();
	c.show_child();
	return 0;
}
