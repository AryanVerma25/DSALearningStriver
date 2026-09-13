#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[],int n){
    int cnt =0;
    int maxi=0;
    for(int i =0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi = max(cnt,maxi);
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
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
    int ans = maxConsecutiveOnes(arr,n);
    cout<<ans<<endl;
}