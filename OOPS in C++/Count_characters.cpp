#include<fstream>
#include<iostream>
using namespace std;

int main(){
    int characters=0,words=0,line=0;
    char c;
    string s;
    ifstream fin;
    char source[20];
    cout<<"Enter file with extension : ";
    gets(source);
    fin.open(source,ios::in);
    while(fin>>c)
	{
        characters++;
	}
    cout<<"No. of characters in file = "<<characters<<endl;
    fin.close();
    fin.open(source,ios::in);
    while(fin>>s)
	{
        words++;
	}
    cout<<"No. of words in file = "<<words<<endl;
    fin.close();
    fin.open(source,ios::in);
    while(getline(fin, s))
	{
        line++;
	}
    cout<<"No. of lines in file = "<<line<<endl;
    fin.close();
    return 0;
}

/*
#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
     int noc=0,now=0,nol=0;
     FILE *fr;
     char fname[20],ch;

     cout<<"\n Enter Source File Name : ";
     gets(fname);
     fr=fopen(fname,"r");
     if(fr==NULL)
     {
          cout<<"\n Invalid File Name. \n No such File or Directory ";
          exit(0);
     }
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch!=' ' && ch!='\n')
               noc++;
          if(ch==' ')
               now++;
          if(ch=='\n')
          {
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }
     fclose(fr);
     cout<<" -------------------------------------";
     cout<<"\n Total No. of Characters  : "<<noc;
     cout<<"\n Total No. of Words       : "<<now;
     cout<<"\n Total No. of Lines       : "<<nol;

     return 0;
}
*/