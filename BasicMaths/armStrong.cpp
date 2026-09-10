#include<iostream>
using namespace std;

bool armStrong(int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Is the number "<<n<<" an armstrong number "<<armStrong(n)<<endl;
}