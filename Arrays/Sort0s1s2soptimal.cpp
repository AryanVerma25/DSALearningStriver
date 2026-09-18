#include<iostream>
using namespace std;

void sortZeroes(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    
}

int main(){
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sortZeroes(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}