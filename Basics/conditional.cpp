#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age>+18){
        cout<<"Your are an adult"<<endl;
    }
    else{
        cout<<"Your are not an adult"<<endl;
    }
}