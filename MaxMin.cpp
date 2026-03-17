#include<iostream>
using namespace std;

int main(){
    // Maximum Element--->
    int arr[6]={2,5,1,6,7,9};
    int max=INT8_MIN;
    
    for (int i = 0; i < 6; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
       

    }
     cout<<max<<endl;

    //  Minimum Element-->
    int a[4]={3,2,4,1};
    int min=INT8_MAX;

    for(int i=0;i<4;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<min;
    

}