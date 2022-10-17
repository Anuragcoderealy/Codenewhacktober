#include<iostream>
using namespace std;

class array{
	int a[5];
	public :
		void getdata();
		void putdata();
		array operator+(array);
};

void array::getdata()
{
	int i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
}

void array::putdata()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}

array array::operator+(array m)
{
	array q;
	for(int i=0;i<5;i++){
		q.a[i]=a[i]+m.a[i];
	}
	return q;
}

int main()
{
	array d1,d2,d3;
	cout<<"Enter values for first array : "<<endl;
	d1.getdata();
	cout<<"Enter values for second array : "<<endl;
	d2.getdata();
	cout<<"First arraty : ";
	d1.putdata();
	cout<<endl<<"Second Array : ";
	d2.putdata();
	cout<<endl<<"Sum : ";
	d3=d1+d2;//d1.operator+(d2)
	d3.putdata();
	return 0;
}
