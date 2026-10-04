#include<iostream>
#include<vector>
using namespace std;
void GenerateCombinationSum2(int arr[],int index,int n,int k,int sum,int target,vector<int>current){
    if (current.size() == k)
    {
        if(sum==target){
        
        for (int x : current)
        {
            cout << x << " ";
        }
        cout << endl;
    }
        return;
    }
    if(sum>target){
        return;
    }
    if (index == n)
    {
        return;
    }
    for (int i = index; i < n; i++)
    {
        current.push_back(arr[i]);
        GenerateCombinationSum2(arr, i + 1, n, k,sum+arr[i],target, current);
        current.pop_back();
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    vector<int>current={};
    GenerateCombinationSum2(arr,0,5,3,0,7,current);
}