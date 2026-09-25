#include<iostream>
#include<map>
using namespace std;

int countSubarray(int arr[],int n ,int k){
    int count = 0;
    int preSum = 0;
    map<int,int>mpp;
    mpp[0] = 1;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        int remove = preSum - k;
        count += mpp[remove];
        mpp[preSum] += 1;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int k ;
    cout<<"Enter sum to be checked: ";
    cin>>k;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = countSubarray(arr,n,k);
    cout<<"No. of subarrays are: "<<ans<<endl;
}