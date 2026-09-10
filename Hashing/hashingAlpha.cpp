#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter your string: ";
    cin>>s;

    int hash[26] = {0};
    for(int i =0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q ;
    cout<<"Enter your queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}