#include<iostream>
using namespace std;

// we have to generate the row of the pascal Triangle

vector<int>generateRow(int row){
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

int main(){
    int row ;
    cout<<"Enter row no.: ";
    cin>> row;
    vector<int>ans = generateRow(row-1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}