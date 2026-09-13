#include<iostream>
#include<map>
using namespace std;

int longestsubArray(int arr[],int n, int k){
    long long sum = 0;
    int maxLen = 0;
    map<long long,int>mpp;
    for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum==k){
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int len = i-mpp[rem];
            maxLen = max(maxLen,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]= i;
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