#include<iostream>
#include<cstdlib>

using namespace std;

bool Palindrome(string ,int i,int j);

int main()
{
	string x="4545";  
	if(Palindrome(x,0,0))
		cout << "It is a palindrome";
	else
		cout << "It is not a Palindrome";
	return 0;
}

bool Palindrome(string x,int i,int j){
	j=x.size()-1;
	
	if(i>j)
		return true;
	else{  
		if(x[i]!=x[j])
			return false;			
		i++;
		j--;
		Palindrome(x,i+1,j-1);
	}
}