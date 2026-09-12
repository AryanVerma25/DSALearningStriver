#include<iostream>
using namespace std;

vector<int> unionSorted(vector<int>a,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    int i =0;
    int j =0;
    vector<int> Union;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(Union.size()==0||Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }
        else{
            if(Union.size()==0||Union.back()!=b[j]){
                Union.push_back(b[j]);
            }
            j++;
        }

    }
    while(j<n2){
        if(Union.size()==0||Union.back()!=b[j]){
            Union.push_back(b[j]);
        }
        j++;
    }
    while(i<n1){
        if(Union.size()==0||Union.back()!=a[i]){
            Union.push_back(a[i]);
        }
        i++;
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