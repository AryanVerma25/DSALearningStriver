#include<iostream>
using namespace std;


vector<int> intersection(vector<int>a,int n , vector<int>b ,int m){
    int i =0;
    int j =0;
    vector<int> ans;
    while(i < n && j < m){
        if(a[i]>b[j]){
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
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
    vector<int>ans = intersection(a,n1,b,n2);
    cout<<"Intersection:  ";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}