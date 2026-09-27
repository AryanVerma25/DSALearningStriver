#include<iostream>
using namespace std;

vector<int> majorityElement(vector<int>nums){
    vector<int> ans;
    int n = nums.size();
    int mini = (int)(n/3)+1;
    for(int i =0;i<n;i++){
        if(ans.size()==0||ans[0]!=nums[i]){
            int count = 0;
            for(int j =0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>=mini){
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()==2){
            break;
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