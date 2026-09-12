#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int key;
    cout<<"Enter Key: ";
    cin>>key;

    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Index of the searching element is: "<<linearSearch(arr,n,key)<<endl;
    
}