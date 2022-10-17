#include<iostream>
using namespace std;

class complex{
	int real,imag;
	public :
		void getdata();
		void putdata();
		friend void operator-(complex &);
};

void complex::getdata(){
	cout<<"Enter real part : ";
	cin>>real;
	cout<<"Enter imaginary part : ";
	cin>>imag;
}

void complex::putdata(){
	if(imag>=0)
	cout<<real<<"+"<<imag<<"i";
	else
	cout<<real<<imag<<"i";
}

void operator-(complex &p){
	
	p.real=-p.real;
	p.imag=-p.imag;
}


int main()
{
	complex c1;
	cout<<"Enter values for first complex number : "<<endl;
	c1.getdata();
	cout<<"First Complex Number : ";
	c1.putdata();
	-c1;//operator-(c1)
	cout<<endl<<"Value of first complex number (after performing negation): ";
	c1.putdata();
	return 0;
}
