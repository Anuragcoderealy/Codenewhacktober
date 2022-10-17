#include<iostream>
using namespace std;

int main(){
    
    int size1,size2;
    cout<<"Enter the size of array for dividend : ";
    cin>>size1;
    cout<<"Enter the size of array for divisor : ";
    cin>>size2;
    int arr[size1],arr1[size2];
    cout<<"Enter the  of array for dividend : "<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr[i];
    }
    cout<<"Enter the of array for divisor : "<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr1[i];
    }
    string c;
    for(int i=0;i<size1;i++){
        try{
            if(arr1[i]==0)
            {
                throw(arr1[i]);
            }
            if(i>=size2){
                c="Index out of range";
                throw(c);
           }
           cout<<arr[i]/arr1[i]<<endl;
        } 
        catch(int i){
            cout<<"Divide By zero exception because divisor is "<<i<<endl;
        }
        catch(string c){
            cout<<c;
            break;
        }       
    }
    
    return 0;
}