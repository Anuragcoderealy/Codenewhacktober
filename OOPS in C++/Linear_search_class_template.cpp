#include<iostream>
using namespace std;

template<class T>
class linear_search{
    T arr[10];
    int size;
    public:
    void getdata(){
        cout<<endl<<"Enter size of array : ";
        cin>>size;
        cout<<"Enter array elements : ";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void putdata(){
        cout<<"Array elements : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void linearSearch(T a){
        int i;
        for(i=0;i<size;i++){
            if(a==arr[i]){
                cout<<endl<<"Element "<<arr[i]<<" is found at index "<<i;
                break;       
            }
        }
        if(i==size){
            cout<<"Element not found"<<endl;
        }
    }
};

int main(){
    linear_search <int>a;
    a.getdata();
    a.putdata();
    int x;
    cout<<endl<<"Enter the element to be search : ";
    cin>>x;
    a.linearSearch(x);

    linear_search <float>b;
    b.getdata();
    b.putdata();
    float y;
    cout<<endl<<"Enter the element to be search : ";
    cin>>y;
    b.linearSearch(y);

    linear_search <char>arr;
    arr.getdata();
    arr.putdata();
    char z;
    cout<<endl<<"Enter the element to be search : ";
    cin>>z;
    arr.linearSearch(z);
    return 0;
}