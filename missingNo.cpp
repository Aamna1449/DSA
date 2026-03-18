#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,6};
    // sum of all element in an array--
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];

    }
    // sumof n element--
    int n=6;
    int ans=n*(n+1)/2;

    int missing= ans-sum;
    cout<<missing;



}