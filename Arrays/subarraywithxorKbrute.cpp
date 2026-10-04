#include<iostream>
using namespace std;

int subarrayCnt(vector<int>nums,int k){
    int n = nums.size();
    int count = 0;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            int xr = 0;
            for(int k = i;k<=j;k++){
                xr = xr ^ nums[k];
            }
            if(xr == k){
                count ++;
            }
        }
    }
    return count;
}

int main() {
    int n, k;

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    int ans = subarrayCnt(nums, k);

    cout << "Number of subarrays with XOR " << k << " = " << ans << endl;

    return 0;
}