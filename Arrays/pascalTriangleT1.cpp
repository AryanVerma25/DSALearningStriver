#include<iostream>
using namespace std;

// we have to get the element by row and column of pascal triangle is given

int getNumber(int row , int col){
    int ans = 1;
    for(int i =0;i<col;i++){
        ans = ans * (row-i);
        ans = ans / (i+1);
    }
    return ans;
}

int main(){
    int row;
    cout<<"Enter row: ";
    cin>>row;
    int col;
    cout<<"Enter col: ";
    cin >> col;
    int ans = getNumber(row-1,col-1);
    cout<<ans<<endl;
}