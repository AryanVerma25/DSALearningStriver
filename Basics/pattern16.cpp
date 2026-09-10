#include<iostream>
using namespace std;

void pattern(int n){
    string str = "A ";
    for(int i =0;i<n ;i++){
        str[0] = 'A' + i;
        for(int j =0;j<=i;j++){
            cout<<str;
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