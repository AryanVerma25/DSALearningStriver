#include<iostream>
#include<map>
using namespace std;

int subarrayCnt(vector<int>nums,int k){
    int xr = 0;
    int n = nums.size();
    map<int,int>mpp;
    mpp[xr] = 1;
    int count = 0;
    for(int i =0;i<n;i++){
        xr = xr ^ nums[i];
        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
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