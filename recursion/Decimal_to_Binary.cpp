#include<iostream>
#include<cstdlib>

using namespace std;

void Decimal_to_Binary(int x);

int main()
{
	int i=23;
	Decimal_to_Binary(i);
	return 0;
}

void Decimal_to_Binary(int x){
	int r=0;
	if(x==0){
		return;
	}
	else{
		r=x%2;
		Decimal_to_Binary(x/2);
		cout << r;
	}
}

