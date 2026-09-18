#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
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
    cout<<ans<<endl;
}