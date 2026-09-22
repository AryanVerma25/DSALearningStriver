#include<iostream>
using namespace std;

vector<int> leaders(int arr[],int n){
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i = n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    return ans;
}

int main(){
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = leaders(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}