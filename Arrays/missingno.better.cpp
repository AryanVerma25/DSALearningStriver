#include<iostream>
using namespace std;

int missingNumber(int arr[],int n){
    vector<int>hash(n+1,0);
    for(int i =0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i =1;i<n;i++){
        if(hash[i]==0){
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
