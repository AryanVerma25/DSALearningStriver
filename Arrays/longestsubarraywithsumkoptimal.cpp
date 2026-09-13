#include<iostream>
using namespace std;

int longestsubArray(int arr[],int n,int k){
    int left = 0;
    int right = 0;
    int maxLen = 0;
    long long sum = arr[0];
    while(right<n){
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum ==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    return maxLen;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int k;
    cout<<"Enter sum to be calculated: ";
    cin>>k;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = longestsubArray(arr,n,k);
    cout<<"Length of the longest array: "<<ans<<endl;
}
