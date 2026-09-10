#include<iostream>
using namespace std;

void reverseArray(int left,int right,int arr[]){
    if(left>=right){
        return;
    }
    swap(arr[left], arr[right]);
    reverseArray(left+1,right-1,arr);
    
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
    reverseArray(0,n-1,arr);
    cout<<"The reversed array is: ";
    for(int i = 0 ; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}