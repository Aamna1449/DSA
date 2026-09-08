#include<iostream>
using namespace std;
int max(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],max(arr,n-1));
}
int main(){
    int arr[5]={2,4,9,6,3};
    cout<<"Maximum Element: "<<max(arr,5);

}