#include<iostream>
using namespace std;

vector<int> rearrange(vector<int> nums,int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    for(int i =0;i<n/2;i++){
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
    }
    return nums;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = rearrange(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}