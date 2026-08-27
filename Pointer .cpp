#include<iostream>
using namespace std;
int main(){
    
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    float b=1.5;
    float *ptr1=&b;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<sizeof(ptr1)<<endl;

    char c='a';
    char *ptr2=&c;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<sizeof(ptr2)<<endl;


}