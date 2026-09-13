#include<iostream>
using namespace std;

int missingNumber(int arr[],int n){
    int sum = n*(n+1)/2;
    int sum1 =0;
    for(int i =0;i<n-1;i++){
        sum1+=arr[i];
    }
    return sum - sum1;
}

int main(){
    int N;
    cout<<"N: ";
    cin>>N;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = missingNumber(arr,N);
    cout<<ans<<endl;
}