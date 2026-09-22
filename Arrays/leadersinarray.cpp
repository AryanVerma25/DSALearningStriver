#include<iostream>
using namespace std;

vector<int> leaders(int arr[],int n){
    vector<int>ans;
    for(int i =0;i<n;i++){
        bool leader = true;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
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
    vector<int> ans = leaders(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}