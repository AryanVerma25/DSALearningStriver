#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
    for(int i =1;i<n;i++){
        int flag =0;
        for(int j =0;j<n-1;j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n-1];
    for(int i =0;i<n-1;i++){
        cin>>arr[i];
    }
    int ans = findMissing(arr,n);
    cout<<ans<<endl;
}