#include<iostream>
using namespace std;

vector<int> rearrange(vector<int>nums,int n ){
    vector<int>ans(n,0);
    int i = 0;
    int j = 1;
    for(int k=0;k<n;k++){
        if(nums[k]>0){
            ans[i] = nums[k];
            i = i+2;
        }
        else{
            ans[j] = nums[k];
            j = j+2;
        }
    }
    return ans;
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