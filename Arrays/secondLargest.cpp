#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int largest = arr[0];
    int secondlargest = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
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
    cout<<"Second Largest element in the array is "<<secondLargest(arr,n)<<endl;
}