#include<iostream>
using namespace std;
int main(){
    int arr[]={6,8,14,11,3,9};
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            cout<<i<<" ";
        }
    }
   
    
    
}