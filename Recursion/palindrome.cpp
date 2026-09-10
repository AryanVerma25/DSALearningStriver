#include<iostream>
using namespace std;

void palindrome(string str, int i){
    if(i>=str.length()/2){
        cout<<"The string is a palindrome."<<endl;
        return;
    }
    if(str[i]!=str[str.length()-i-1]){
        cout<<"The string is not a palindrome."<<endl;
        return;
    }
    palindrome(str,i+1);
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    palindrome(str,0);
}