#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i =1;i<n;i++){
        bool swapped = false;
        for(int j = 0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
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
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}