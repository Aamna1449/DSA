#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,3,12};
    int pos=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}