#include<iostream>
#include<cstring>
using namespace std;
void removeX(char *input ,int X)
{
    if(input[0]=='\0')
    {
        return;
    }
    remove(input+1);
    if(input[0]==X)
    {
for(int i=strlen(input),j=strlen(input)-1;j>=0;i--,j--)
{
    input[j]=input[i];
}
cout<<input;
    }
    else{
        cout<<input;
    }

}
int main()
{
    char input[100];
    cin>>input;
    int X;
    cin>>X;
    removeX(input,X);
}