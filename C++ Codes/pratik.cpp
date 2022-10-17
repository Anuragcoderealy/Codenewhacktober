#include <iostream>

bool checkPalindrome(char input[]) {
    // Write your code here
    int size=0;
    while(input[size]!='\0'){
        size++;
        
    }
    if(size==0){
        return true;
    }
    if(size==1){
        return true;
    }
    if(input[0]==input[size-1]){
        input[size-1]='\0';
        return checkPalindrome(input+1);
    }
    else{
        return false;
    }

}



int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

