#include<iostream>
using namespace std;

void moveZeroes(int arr[],int n){
    int j = -1;
    for(int i =0;i<n;i++){//find first zero and break
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    for(int i = j+1;i<n;i++){//swap if element is non zero
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
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