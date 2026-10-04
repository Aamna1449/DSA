#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,4,4};
    int pos=1;
    for(int i=1;i<7;i++){
        if(arr[i]!=arr[i-1]){
            arr[pos]=arr[i];
            pos++;
        }
    }

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    
}