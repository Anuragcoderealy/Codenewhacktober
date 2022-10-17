#include <iostream>

using namespace std;
bool checkPalindrome1(char *ary1,char bry[],int size)
{ 
	if(size==0)
	{
		return 0;
	}
	bool store=checkPalindrome1(ary1,bry+1,size-1);
	if(ary1[size]==bry[0])
	{ //cout<<ary1[store]<<endl;
//	cout<<bry[0];
	
	}
	else
	{
		return false;
	}
	return true;
}
bool checkPalindrome(char ary[])
{ int c=-1;
char br[50];
	for(int i=0;ary[i]!='\0';i++)
	{
	c++;
	br[i]=ary[i]	;
	}
	
	int check=checkPalindrome1(ary,br,c);
	cout<<check;
	if(check)
	{
		return true;
	}
	else {
		return false;
	}
}
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

