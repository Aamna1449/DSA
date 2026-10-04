#include<iostream>
using namespace std;
int MinDigit(int n){
    if(n<10){
        return n;
    }
    return min(n%10,MinDigit(n/10));
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Minimum Digit: "<<MinDigit(n);
}