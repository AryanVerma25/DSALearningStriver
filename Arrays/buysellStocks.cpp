#include<iostream>
using namespace std;

int bestTime(int arr[],int n){
    int mini = arr[0];
    int profit = 0;
    for(int i =1;i<n;i++){
        int cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = bestTime(arr,n);
    cout<<"Max Profit: "<<ans<<endl;
}