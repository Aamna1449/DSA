#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=INT_MIN;
       
        int n=arr.size();
       int prefix=0;
       for(int i=0;i<n;i++){
           prefix+=arr[i];
           maxi=max(maxi,prefix);
           if(prefix<0){
               prefix=0;
           }
       }
       return maxi;
    }

    int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout <<maxSubarraySum(v);
}
