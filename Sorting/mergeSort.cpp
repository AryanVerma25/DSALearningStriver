#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high,int n){
    int temp[n];
    int left = low;
    int right = mid+1;
    int i = 0;

    while(left<=mid && right <= high){
        if(arr[left]<=arr[right]){
            temp[i] = arr[left];
            left++;
        }
        else{
            temp[i]= arr[right];
            right++;
        }
        i++;
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int j =0;j<i;j++){
        arr[low+j]=temp[j];
    }
}

void mergeSort(int arr[],int low,int high,int n){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid,n);
    mergeSort(arr,mid+1,high,n);
    merge(arr,low,mid,high,n);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1,n);
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}