#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int Binary_to_Decimal(char *x);
int findlength(char a[]);
int Binary_to_Decimal(char *x, int i, int j, int decimal);

int main()
{
	char x[]={"10111"};
	int dec=Binary_to_Decimal(x);
	cout << dec;
	return 0;
}

int Binary_to_Decimal(char *x){
	return Binary_to_Decimal(x,0,findlength(x)-1,0);
}

int Binary_to_Decimal(char *x, int i, int j, int decimal){
	if(x[i]=='\0'){
		return decimal;
	}
	else{
		decimal=decimal+pow(2,i)*(x[j]-48);
		Binary_to_Decimal(x,i+1,j-1,decimal);
	}
}

int findlength(char a[]){
	int i=0;
	while(a[i]!='\0')
		i++;
	return i;
}

