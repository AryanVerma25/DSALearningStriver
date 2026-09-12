#include<iostream>
using namespace std;

void rotateArray(int arr[], int n,int k){
    int temp[k];
    for(int i =0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i = k;i<n;i++){
        arr[i-k] = arr[i];
    }
    for(int i = n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int k;
    cout<<"Enter places to rotate: ";
    cin>>k;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    rotateArray(arr,n,k);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}