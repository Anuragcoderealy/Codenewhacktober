#include <bits/stdc++.h>
using namespace std;


int minimum(vector<int>& a, int n) {
    int low = 0;
    int high = n-1;
    cout<<low<<" "<<high<<endl;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == a[high])
            high--;
        else if (a[mid] > a[high])
            low = mid + 1;
        else
            high = mid;
    }
    return high;
}


int main() 
{
    int n; 
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    cout<<"Index of Minimum Element: \n"<<minimum(v,n)<<endl;
    return 0;
}