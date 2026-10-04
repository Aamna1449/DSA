#include<iostream>
using namespace std;
void BinaryDigit(int n){
    if(n==0){
        return;
    }
    BinaryDigit(n/2);
    cout<<n%2;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Binary digit is: ";
    BinaryDigit(n);
}