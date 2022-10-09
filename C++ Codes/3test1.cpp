#include <iostream>

using namespace std;
#include <climits>

int main()
{
int N,x;
    cin>>N;
    int l= INT_MIN, sl=INT_MIN;
    for(int i=1;i<=N;i++){
        cin>>x;
        if(x>l){
            sl=l;
            l=x;
        }
        if(x<l && x>sl){
            sl=x;
        }
    }
    cout<<sl;
    return 0;
}