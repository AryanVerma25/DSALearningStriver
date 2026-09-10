#include<iostream>
using namespace std;

void euclideanGCD(int a, int b){ // O(log(min(a,b)))
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0){
        cout<<"The gcd is: "<<b<<endl;
    }
    else if(b==0){
        cout<<"The gcd is: "<<a<<endl;
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    euclideanGCD(a,b);
}