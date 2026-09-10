#include<iostream>
using namespace std;

void pattern(int n){
    for(int i =0 ; i< n; i++){
        for(int j =0 ; j<n-i-1; j++){//space
            cout<<"  ";
        }
        for(int j =0 ; j<2*i+1; j++){//stars
            cout<<"* ";
        }
        for(int j = 0 ; j<n-i-1; j++){//space
            cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int n ;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
}