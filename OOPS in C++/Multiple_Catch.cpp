#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter choice : ";
    cin>>choice;
    try{
        if(choice==0){
            throw (0);
        }
        else if(choice==1){
            throw (1.1);
        }
        else if(choice==2){
            throw ('a');
        }
        cout<<"Better luck next time"<<endl;

    }

    catch(int i){
        cout<<"Integer Exception Caused by "<<i;
    }
    catch(float i){
        cout<<"Float Exception Caused by "<<i;
    }
    catch(char i){
        cout<<"Char Exception Caused by "<<i;
    }

    return 0;
}