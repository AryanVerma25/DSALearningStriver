#include<iostream>
using namespace std;

int findElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int num = arr[i];
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count == 1){
            return num;
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