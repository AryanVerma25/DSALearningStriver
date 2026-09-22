#include<iostream>
using namespace std;

int longestConsecutive(vector<int> arr,int n ){
    sort(arr.begin(),arr.end());
    int lastSmallest = INT_MIN;
    int longest = 0;
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]-1 == lastSmallest){
            count++;
            lastSmallest = arr[i];
        }
        else if(arr[i]-1 != lastSmallest){
            count = 1;
            lastSmallest = arr[i];
        }
        longest = max (longest,count);
    }
    return longest;
}

int main(){
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = longestConsecutive(arr,n);
    cout<<ans<<endl;
}