#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
    int ele;
    int count = 0;
    for(int i =0;i<n;i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return ele;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = majorityElement(arr,n);
    cout<<"Majority elements is: "<<ans<<endl;
}
