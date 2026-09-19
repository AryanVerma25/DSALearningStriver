#include<iostream>
using namespace std;

vector<int> maxSubarray(int arr[],int n){
    int maxi = INT_MIN;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start;
    for(int i =0;i<n;i++){
        if(sum == 0){
            start = i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi = sum ;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return {ansStart,ansEnd};
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = maxSubarray(arr,n);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}