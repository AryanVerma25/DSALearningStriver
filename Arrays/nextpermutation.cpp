#include<iostream>
using namespace std;

void permutation(vector<int>&nums){//pass by reference because if we pass by value then original value remains unchnaged inside main
    int n = nums.size();
    int index = -1;
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i =n-1;i>=0;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    permutation(nums);
    for(int i =0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}