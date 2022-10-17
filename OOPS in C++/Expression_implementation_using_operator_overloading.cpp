#include<iostream>
using namespace std;

class complex{
	int real,imag;
	public :
		void getadata();
		void putdata();
		complex operator*(complex);
		complex operator-(complex);
};

void complex::getadata()
{
	cout<<"Enter real part : ";
	cin>>real;
	cout<<"Enter imaginary part : ";
	cin>>imag;
}

void complex::putdata()
{
	if(imag>=0)
	cout<<real<<"+"<<imag<<"i";
	else
	cout<<real<<imag<<"i";
}

complex complex::operator*(complex c)
{
	complex temp;
	temp.real=(real*(c.real))-(imag*(c.imag));
	temp.imag=(real*(c.imag))+(c.real * imag);
	return temp;
}

complex complex::operator-(complex c)
{
	complex temp;
	temp.real=real-c.real;
	temp.imag=imag-c.imag;
	return temp;
}


int main()
{
	complex c1,c2,c3,c4;
	cout<<"Enter values for first complex number : "<<endl;
	c1.getadata();
	cout<<"Enter values for second complex number : "<<endl;
	c2.getadata();
	cout<<"Enter values for third complex number : "<<endl;
	c3.getadata();
	cout<<"First Complex Number : ";
	c1.putdata();
	cout<<endl<<"Second Complex Number : ";
	c2.putdata();
	cout<<endl<<"Third Complex Number : ";
	c3.putdata();
	c4=(c3-c2)*c1;
	cout<<endl<<"Value of expression : ";
	c4.putdata();
	return 0;
} 
