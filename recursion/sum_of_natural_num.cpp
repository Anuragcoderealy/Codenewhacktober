#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int sum_of_natural_num(int x);

int main()
{
	int sum=sum_of_natural_num(10);
	cout << sum;
	return 0;
}

int sum_of_natural_num(int x){
	if(x==1)
		return 1;
	else 
		return x+sum_of_natural_num(x-1);
}


