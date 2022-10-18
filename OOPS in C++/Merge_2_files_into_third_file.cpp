#include<fstream>
#include<iostream>
using namespace std;

int main(){
    string s;
    ifstream fin;
    ofstream fout;
    char source[20],destination[20];
    cout<<"Enter 1st source file with extension : ";
    gets(source);
    fin.open(source,ios::in);
    cout<<"Enter destination file with extension : ";
    gets(destination);
    fout.open(destination,ios::out);
    cout<<"Reading from 1st source file and writing in Destination File .....\n";
    while(getline(fin, s))
	{
        cout<<s<<endl;
		fout << s << "\n";
	}
    fin.close();
    cout<<"Enter 2nd source file with extension : ";
    gets(source);
    fin.open(source,ios::in);
    cout<<"Reading from 2nd source file and writing in Destination File .....\n";
    while(getline(fin, s))
	{
        cout<<s<<endl;
		fout << s << "\n";
	}
    fin.close();
    fout.close();
    return 0;
}