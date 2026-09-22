#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int k){
    for(int i =0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int longestConsecutive(int arr[],int n){
    int longest = 0;
    for(int i =0;i<n;i++){
        int count = 1;
        int x = arr[i];
        while(linearSearch(arr,n,x+1)==true){
            x = x+1;
            count++;
        }
        longest = max (longest,count);
    }
    return longest;
}

int main(){
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = longestConsecutive(arr,n);
    cout<<ans<<endl;
}