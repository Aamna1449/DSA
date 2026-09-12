#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int X,int index,int N){
    if(index==N){
        return 0;
    }
    if(arr[index]==X){
        return 1;
    }

    return LinearSearch(arr,X,index+1,N);
}
int main(){
    int arr[7]={2,4,7,3,11,8,12};
    int X=8;
    cout<<LinearSearch(arr,X,0,7);
}