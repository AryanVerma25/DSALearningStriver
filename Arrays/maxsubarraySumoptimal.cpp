#include<iostream>
using namespace std;

int maxSubarray(int arr[],int n){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum>maxi){
            maxi = sum;
        }

        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>> arr[i];
    }
    int ans = maxSubarray(arr,n);
    cout<<"Maximum sum of subarray: "<<ans<<endl;
}