#include<iostream> 
using namespace std;
 int findKthPositive(int arr[], int k, int n) {

        int start=0;
        int end=n-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]-mid-1>=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return (ans+k);
        
    }

   int main(){
    int k;
    cout<<"Enter the target: ";
    cin>>k;
    int arr[1000];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Kth Positive Integer: ";
    cout<<findKthPositive(arr,k,n);
    return 0;
    
   }