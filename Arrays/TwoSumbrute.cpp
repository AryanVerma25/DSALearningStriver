#include<iostream>
using namespace std;

vector<int> twoSum(int arr[],int n,int target){
    bool ans;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return{i,j};
            }
        }
    }
    return{-1,-1};
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int target;
    cout<<"Enter sum to find: ";
    cin>>target;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = twoSum(arr,n,target);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}