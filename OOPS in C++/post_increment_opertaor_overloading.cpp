#include<iostream>
using namespace std;

class complex{
	int real,imag;
	public :
		void getdata();
		void putdata();
		complex operator++(int);
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

complex complex::operator++(int){
	complex temp;
	temp.real = (real)++;
	temp.imag = (imag)++;
	return temp;
}

int main(){
	complex c1,c2;
	cout<<"Enter values for first complex number : "<<endl;
	c1.getdata();
	cout<<"First Complex Number : ";
	c1.putdata();
	c2=c1++;//c2=operator++(c1)
	cout<<endl;
	cout<<"Value of second complex number : ";
	c2.putdata();
	cout<<endl<<"Value of first complex number : ";
	c1.putdata();
	return 0;
}

