#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]  = {0};
    for(int i =0 ; i<n ;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter queries: ";
    cin>> q;

    while(q--){
        int number; 
        cin>>number;
        cout<<hash[number]<<endl;
    }

}