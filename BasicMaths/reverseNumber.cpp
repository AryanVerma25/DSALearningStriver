#include<iostream>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n>0){
        int lastdigit = n%10;
        n = n/10;
        rev = rev*10 + lastdigit;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The reverse of "<<n<<" is "<<reverse(n)<<endl;
}