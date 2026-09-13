#include<iostream>
using namespace std;

int longestsubArray(int arr[],int n,int k){
    int maxLen = 0;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                maxLen = max(maxLen,j-i+1);
            }
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