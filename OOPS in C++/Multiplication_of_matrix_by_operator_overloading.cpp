#include<iostream>
using namespace std;

class array{
	int a[5][5];
	public :
		void getdata();
		void putdata();
		friend array operator*(array,array);
};

void array::getdata()
{
	int i,j;
	for(int i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	    {
		    cin>>a[i][j];
	    }
	}
}

void array::putdata()
{
	int i,j;
	for(int i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	    {
		    cout<<a[i][j];
	    }
	}
	
}

array operator*(array m,array n)
{
	array q;
	int i,j,k,sum;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=0;
			for(k=0;k<5;k++)
			{
				sum=sum+m.a[i][k]*n.a[k][j];
			}
			q.a[i][j]=sum;
		}
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
	cout<<"First array : ";
	d1.putdata();
	cout<<endl<<"Second Array : ";
	d2.putdata();
	cout<<endl<<"Multiplication of Matrices  : ";
	d3=d1*d2;//d1.operator*(d2)
	d3.putdata();
	return 0;
}
