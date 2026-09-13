#include<iostream>
using namespace std;

int missingNumber(int arr[],int N){
    int n = N-1;
    for(int i =1;i<n;i++){
        int flag = 0;
        for(int j =0;j<n-1;j++){
            if(arr[j]==i){
                flag = 1;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return -1;
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