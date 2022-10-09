#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        float n,x;
        cin>>n>>x;
        float k=n*x;
        float a=k/4;
        if (a<1){
            cout<<1<<endl;
        }else
        {
          cout<<ceil(a)<<endl;
        }
        
        
    }
    
}