#include<iostream>
using namespace std;

int maxSubarray(int arr[],int n){
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum+=arr[j];
            if(sum>maxi){
                maxi = sum;
            }
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
    cout<<"Maximum sum of subarray "<<ans<<endl;
}