#include<iostream>
using namespace std;

int findElement(int arr[],int n){
    int maxi = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    vector<int>hash(maxi+1,0);
    for(int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i =0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = findElement(arr,n);
    cout<<ans<<endl;
}