#include<iostream>
using namespace std;

int secondSmallest(int arr[],int n){
    int smallest = arr[0];
    int secondsmallest = INT_MAX;

    for(int i =0;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondsmallest){
            secondsmallest = arr[i];
        }
    }
    return secondsmallest;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Smallest element in the array is "<<secondSmallest(arr,n)<<endl;
}