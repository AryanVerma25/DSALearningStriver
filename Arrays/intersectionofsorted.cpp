#include<iostream>
using namespace std;

vector<int> intersectionArray(vector<int> a,vector<int>b){
    vector<int> ans;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> visited(n2,0);
    for(int i =0;i<n1;i++){
        for(int j =0;j<n2;j++){
            if(a[i]==b[j]&&visited[j]==0){
                ans.push_back(a[i]);
                visited[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
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
    vector<int>ans = intersectionArray(a,b);
    cout<<"Intersection:  ";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}