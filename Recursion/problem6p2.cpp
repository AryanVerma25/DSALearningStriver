#include<iostream>
using namespace std;

void sumN(int n , int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    sumN(n-1,sum+n);
}

int main(){
    int n;
    cout<<"Enter the number up to which you want to find the sum: ";
    cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is: ";
    sumN(n,0);
    return 0;
}