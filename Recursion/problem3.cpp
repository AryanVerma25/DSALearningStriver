#include<iostream>
using namespace std;

void printNumbers(int n , int i){
    if(n<i){
        return;
    }
    cout<<n<<" ";
    printNumbers(n-1,i);
}

int main(){
    int n;
    cout<<"Enter the number up to which you want to print numbers in reverse order: ";
    cin>>n;
    printNumbers(n,1);
    return 0;
}