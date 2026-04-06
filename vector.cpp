#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Create Vector,declare
    vector<int>v;

    // Size of vector and capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    // Update value
    v[1]=5;
    vector<int>v1(5,1);
    for(int i=0;i<5;i++){
        cout<<v1[i]<<" ";
    }

    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    v1.push_back(4);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;



}
