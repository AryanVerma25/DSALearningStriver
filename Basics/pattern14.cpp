#include<iostream>
using namespace std;

void pattern(int n){
    for(int i =1;i<=n;i++){
        string str  = "A ";
        for(int j =1;j<=i;j++){
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