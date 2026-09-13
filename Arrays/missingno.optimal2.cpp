#include<iostream>
using namespace std;

int missingNumber(int arr[],int n){
    int xor1 = 0;
    int xor2= 0;
    for(int i =0;i<n-1;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1=xor1^n;
    return xor1 ^ xor2;
}

int main(){
    int N;
    cout<<"N: ";
    cin>>N;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = missingNumber(arr,N);
    cout<<ans<<endl;
}