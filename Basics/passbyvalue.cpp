#include<iostream>
using namespace std;

void doSomething(int num){//copy of num is created in the function
    cout<<num<<endl; // if & is added on side the paramenter then the original value of num will be changed
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);//pass by value original value of num will not be changed
    cout<<num<<endl;  //10  

}