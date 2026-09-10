#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int main(){
    int n;
    cout<<"Enter the number up to which you want to find the sum: ";
    cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum(n)<<endl;
    return 0;
}