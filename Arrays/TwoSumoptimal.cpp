#include<iostream>
using namespace std;

bool twoSum(vector<int>nums,int n,int target){
    sort(nums.begin(),nums.end());
    int left = 0;
    int right = nums.size()-1;
    while(left<right){
        int sum = nums[right] + nums[left];
        if(sum == target){
            return true;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}

int main(){
    int n ;
    cout<<"Enter size of vector: ";
    cin>>n;
    int k;
    cout<<"Enter sum to find: ";
    cin>>k;
    vector<int>nums(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    bool ans = twoSum(nums,n,k);
    cout<<ans<<endl;
}