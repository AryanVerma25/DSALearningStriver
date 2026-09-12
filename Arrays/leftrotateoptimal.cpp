#include<iostream>
using namespace std;

void leftrotate(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int k ;
    cout<<"Enter how many time you want to rotate: ";
    cin>>k;

    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotate(arr,n,k);
    cout<<"Rotated Array: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}