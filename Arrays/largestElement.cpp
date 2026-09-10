#include<iostream>
using namespace std;

int largestElement(int arr[], int n){
    int maxElement = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>maxElement){
            maxElement = arr[i];
        }
    }
    return maxElement;
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
    cout<<"Largest element in the array is "<<largestElement(arr,n)<<endl;
}