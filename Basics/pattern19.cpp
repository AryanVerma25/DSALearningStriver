#include<iostream>
using namespace std;

void pattern(int n){
    int space = 0;
    for(int i =0;i<n;i++){
        //stars
        for(int j =0;j<n-i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j =0;j<space;j++){
            cout<<"  ";
        }
        space += 2;

        //stars
        for(int j =0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int space2=8;
    for(int i =1;i<=n;i++){
        //stars
        for(int j =1;j<=i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j =0;j<space2;j++){
            cout<<"  ";
        }
        
        //stars
        for(int j =1;j<=i;j++){
            cout<<"* ";
        }
        space2 -= 2;
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
}