#include<iostream>
using namespace std;
int MaxElement(int arr[],int n){
    // base case
    if(n==1){
        return arr[0];
    }
    int restmax=MaxElement(arr+1,n-1);

    return max(arr[0],restmax);
}
int main(){
    int arr[]={3,7,2,9,5};

    cout<<"Maximum Element: "<<MaxElement(arr,5);
}