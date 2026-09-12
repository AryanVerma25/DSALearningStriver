#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

vector <int> unionSorted(vector<int>a,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i =0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i =0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> Union;
    for(auto it:st){
        Union.push_back(it);
    }
    return Union; 
} 

int main(){
    int n1,n2;
    cout<<"Enter the size of the first vector: ";
    cin>>n1;
    vector<int> a(n1);
    cout<<"Enter elements of first vector: ";
    for(int i =0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of the second vector: ";
    cin>>n2;

    vector<int> b(n2);
    cout<<"Enter elements of second vector: ";
    for(int i =0;i<n2;i++){
        cin>>b[i];
    }
    vector<int>ans = unionSorted(a,b);
    cout<<"Union: ";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}