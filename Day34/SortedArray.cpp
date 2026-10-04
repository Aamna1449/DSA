#include<iostream>
using namespace std;
bool IsSorted(int arr[],int index,int n){
    if(index==n-1){
        return true;
    }

    if(arr[index]>arr[index+1]){
        return false;
    }

    return IsSorted(arr,index+1,n);
}

int main(){
    int arr[]={1,2,5,3,4};
    cout<<IsSorted(arr,0,5);
}