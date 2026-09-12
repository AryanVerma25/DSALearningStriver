#include<iostream>
using namespace std;

void moveZeroes(int arr[],int n){
    int temp[n];
    int j =0;
    for(int i =0;i<n;i++){ // copying nonzero elements to a different array
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i =0;i<j;i++){//copying to original array
        arr[i]=temp[i];        
    }
    for(int i = j;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}