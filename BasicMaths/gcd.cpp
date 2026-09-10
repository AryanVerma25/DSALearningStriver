#include<iostream>
using namespace std;

void gcd(int a,int b){
    int gcd = 1;
    for(int i =1;i<=min(a,b);i++){ //O(min(a,b))
        if(a%i==0 && b%i == 0){
            gcd = i;
        }
    }
    cout<<"The gcd is: "<<gcd<<endl;
};

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    gcd(a,b);
}