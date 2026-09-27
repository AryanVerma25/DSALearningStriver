#include<iostream>
#include<map>
using namespace std;

vector<int>majorityElement(vector<int>nums){
    vector<int>ans;
    int n = nums.size();
    int mini = (int)(n/3)+1;
    map<int,int>mpp;
    for(int x : nums){
        mpp[x]+=1;
        if(mpp[x]>=mini){
            ans.push_back(x);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int>nums;
    cout<<"Enter elements of vector: ";
    for(int i =0;i<n;i++){
        int x ;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>ans = majorityElement(nums);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}