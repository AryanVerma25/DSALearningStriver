#include<iostream>
using namespace std;

void palindrome(int n){
    int rev = 0;
    int temp = n;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;
        rev = rev*10+lastdigit;
    }
    if(temp==rev){
        cout<<"The number is a palindrome"<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
}   