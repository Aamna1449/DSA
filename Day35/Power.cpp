#include<iostream>
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*Power(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<Power(a,b);
}