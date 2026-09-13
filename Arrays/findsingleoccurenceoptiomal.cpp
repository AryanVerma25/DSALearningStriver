#include<iostream>
using namespace std;

int findElement(int arr[],int n){
    int xor1 = 0;
    for(int i =0;i<n;i++){
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = findElement(arr,n);
    cout<<ans<<endl;
}