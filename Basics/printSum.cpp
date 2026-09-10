#include<iostream>
using namespace std;

int sum (int a ,int b){
    int num3 = a+b;
    return num3;
};

int main(){
//     int num1;
//     cout<<"Enter number 1: ";
//     cin>>num1;
//     int num2;
//     cout<<"Enter number 2: ";
//     cin>>num2;
//     int sum = num1+num2;
//     cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    int num2;
    cout<<"Enter number 2: ";
    cin>>num2;
    int result = sum(num1,num2);
    cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<result<<endl;
    return 0;
}