#include<iostream>
using namespace std;
int CountZeros(int n){
    if(n==0){
        return 0;
    }
    if(n%10==0){
        return 1+CountZeros(n/10);
    }
    return CountZeros(n/10);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Count Number of Zeros: "<<CountZeros(n);
}