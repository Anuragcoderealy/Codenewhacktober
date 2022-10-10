#include <bits/stdc++.h>
using namespace std;

void printSubstring(char input[]){
    for(int i=0; i< strlen(input); i++){
        for(int j=i; j<strlen(input); j++){
            print(input, i, j);
        }
    }
}
//function to print characters
void print(char input[], int start, int end){
    for(int i=start; i<end; i++){
        cout<<input[i]<<endl;
    }
}

int main() {
    char string[1000];
    cin >> string;                                  //taking input string
    printSubstring(string);                         //function to print substring
}