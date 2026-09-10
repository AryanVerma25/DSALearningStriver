#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
