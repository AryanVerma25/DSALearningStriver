#include<iostream>
using namespace std;

int countSubarray(int arr[],int n ,int k){
    int count = 0;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j =i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
        
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int k ;
    cout<<"Enter sum to be checked: ";
    cin>>k;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = countSubarray(arr,n,k);
    cout<<"No. of subarrays are: "<<ans<<endl;
}