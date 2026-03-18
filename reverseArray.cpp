#include<iostream>
using namespace std;
int main(){
    int arr[6]={6,8,14,11,3,9};
    int  i=0,j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}