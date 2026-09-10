#include<iostream>
using namespace std;

void print(int i, int n){ // using backtracking
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter the number up to which you want to print numbers: ";
    cin>>n;
    print(n,n);
    return 0;
}