#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }  
}

int main(){
    int n;
    cout<<"Enter the number for which you want to find the factorial: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}