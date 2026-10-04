#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    // base case
    if(n==1){
        return true;
    }

    // comparison
    if(arr[0]>arr[1]){
        return false;
    }

    // recursive call
    return isSorted(arr+1,n-1);
}

int main(){
    int arr[]={2,5,8,12,15};

    cout<<isSorted(arr,5);
}