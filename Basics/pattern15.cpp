#include<iostream>
using namespace std;

void pattern(int n){
    for(int i =0;i<n;i++){
        string str = "A ";
        for(int j = 0; j<n-i;j++){
            cout<<str;
            str[0]++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
}