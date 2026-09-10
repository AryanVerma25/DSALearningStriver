#include<iostream>
using namespace std;

void divisor(int n){
    vector<int> divisors;
    for(int i = 1;i*i<=n;i++){//(o(sqrt(n)))
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());//(o(nlogn)) n is number of factors
    for(int i = 0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The divisors of "<<n<<" are: ";
    divisor(n);
    cout<<endl;
}