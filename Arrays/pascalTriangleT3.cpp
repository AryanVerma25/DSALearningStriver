#include<iostream>
using namespace std;

// generate the pascal triangle

vector<int> generateRow(int row){
    int ans = 1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int i =0;i<row;i++){
        ans = ans * (row-i);
        ans = ans / (i+1);
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> triangle(int n){
    vector<vector<int>>ans;
    for(int i =1;i<n;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of triangle: ";
    cin>>n;
    vector<vector<int>>ans = triangle(n);
    for(int i =0;i<ans.size();i++){
        for(int j =0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}