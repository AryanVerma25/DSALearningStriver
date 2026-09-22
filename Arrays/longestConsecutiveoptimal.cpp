#include<iostream>
#include<set>
using namespace std;

int longestConsecutive(int arr[],int n){
    set<int> st;
    int longest = 0;
    for(int i =0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                count++;
            }
            longest = max(longest,count);
        }
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