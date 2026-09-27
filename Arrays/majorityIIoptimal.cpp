#include<iostream>
using namespace std;

vector<int>majorityElement(vector<int>nums){
    int count1 = 0;
    int count2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;

    for(int i =0;i<nums.size();i++){
        if(count1 ==0 && nums[i]!=ele2){
            count1= 1;
            ele1 = nums[i];
        }
        else if(count2 == 0 && nums[i]!= ele1){
            count2 = 1;
            ele2 = nums[i];
        }
        else if(nums[i]==ele1){
            count1++;
        }
        else if(nums[i]==ele2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    count1 =0,count2 = 0;
    for(int i =0;i<nums.size();i++){
        if(ele1 == nums[i]){
            count1++;
        }
        if(ele2 == nums[i]){
            count2++;
        }
    }
    vector<int>ls;
    int mini = (nums.size()/3);
    if(count1>mini){
        ls.push_back(ele1);
    }
    if(count2>mini){
        ls.push_back(ele2);
    }
    return ls;
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