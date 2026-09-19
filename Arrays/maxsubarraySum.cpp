#include<iostream>
using namespace std;

int maxSubarray(int arr[],int n ){
    int maxi = 0;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            int sum = 0;
            for(int k = i;k<j;k++){
                sum += arr[k];
            }
            if(sum > maxi){
                maxi = sum;
            }
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Emter elements of array: ";
    for(int i =0;i<n;i++){
        cin>> arr[i];
    }
    int ans = maxSubarray(arr,n);
    cout<<"Maxmimum sum of subarray "<<ans<<endl;
}