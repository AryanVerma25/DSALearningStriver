#include<iostream>
using namespace std;

void reverseArray(int left,int n,int arr[]){
    if(left>=n/2){
        return;
    }
    swap(arr[left],arr[n-left-1]);
    reverseArray(left+1,n,arr);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    }
    reverseArray(0,n,arr);
    cout<<"The reversed array is: ";
    for(int i = 0 ; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}