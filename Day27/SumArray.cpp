#include<iostream>
using namespace std;
int ArraySum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+ArraySum(arr,n-1);
}
int main(){
    int arr[5]={2,4,6,7,8};
   cout<<"The sum of array: "<< ArraySum(arr,5);

}