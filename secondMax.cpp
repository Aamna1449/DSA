#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,6,4,3,5,8,1};
    int ans=-1;
    // First Largest--
    for (int i = 0; i<7; i++)
    {
       if(arr[i]>ans){
         ans=arr[i];

       }
      
    }
    // Second Largest--
    int sec=-1;
    for (int i = 0; i < 7; i++)
    {
       if(arr[i]!=ans){
        sec=max(sec,arr[i]);
       }
      
    }
     cout<<sec;
    
    return -1;
}