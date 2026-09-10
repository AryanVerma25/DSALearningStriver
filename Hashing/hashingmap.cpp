#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter your queries: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
}