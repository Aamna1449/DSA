#include<iostream>
using namespace std;
int firstOccurance(int arr[],int target,int n){
    if(n==0){
        return -1;
    }
    if(arr[0]==target){
        return 0;
    }
    
       int ans= firstOccurance(arr+1,target,n-1);
       if(ans==-1){
        return -1;
       }

       return ans+1;


}
int main(){
    int arr[]={5,3,7,3,9};
    cout<<firstOccurance(arr,3,5);
}