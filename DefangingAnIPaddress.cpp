#include<iostream>
using namespace std;

string defangAnIPaddr(string address ){
    string ans;
    int index=0;
    while(index<address.size()){
        if(address[index]=='.'){
            ans+="[.]";

        }
        else{
            ans+=address[index];
        }
            index++;
        
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter an IP address: ";
    cin>>s;
    cout<<endl;

    cout<<"Defanging an IP Address: ";
    cout<<defangAnIPaddr(s);
}