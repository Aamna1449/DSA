#include<iostream>
using namespace std;
int findMin(int arr[] , int n) {
        int start=0;
        int end=n-1;
        int ans=arr[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
        
    }
int main(){
    // int k;
    // cout<<"Enter the target: ";
    // cin>>k;
    int arr[1000];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Minimum: ";
    cout<<findMin(arr,n);
    return 0;
    
   }
