#include<iostream>
using namespace std;

void printName(string name){
    cout<<"My Name is "<<name<<endl;
}

int main(){
    string name ;
    cout<<"Enter Your Name: ";
    cin>> name;
    printName(name);

    string name2;
    cout<<"Enter Your Name: ";
    cin>>name2;
    printName(name2);
}