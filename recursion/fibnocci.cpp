#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int Fibnocci_series(int x);

int main()
{
	int x,i=0;
	cout << "Enter the number of terms of series : ";
	cin >> x;
	cout << "\nFibonnaci Series : ";
	while(i < x) {
   	cout << " " << Fibnocci_series(i);
   	i++;
}
	return 0;
}

int Fibnocci_series(int x){
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else{
		return Fibnocci_series(x-1)+Fibnocci_series(x-2);
	}
}


