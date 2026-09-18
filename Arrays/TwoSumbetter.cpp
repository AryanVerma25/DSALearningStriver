#include<iostream>
#include<map>
using namespace std;

vector<int> twoSum(int arr[],int n,int target){
    map<int,int> mpp;
    for(int i =0;i<n;i++){
        int num = arr[i];
        int more = target - num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num] = i;
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