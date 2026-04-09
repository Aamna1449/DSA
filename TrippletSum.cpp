#include<iostream>
#include<vector>
using namespace std;
 bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        // Sort array
        // sort(arr.begin(),arr.end());
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                if(arr[i]>arr[j+1]){
                swap(arr[j],arr[j-1]);
              }
          }
            
        }
        
        for(int i=0;i<n-2;i++){
           int ans=target-arr[i];
            int start=i+1,end=n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return 1;
                }
                else if(arr[start]+arr[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return 0;
    }

int main(){
    vector<int> arr={1,4,45,6,10,8};
    int target=13;
    cout<<hasTripletSum(arr,target);
    return 0;
}