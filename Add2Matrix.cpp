#include<iostream>
using namespace std;
void SumOfMatrices(int arr1[3][4], int arr2[3][4], int sum[3][4]){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // return sum[3][4];
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int arr1[3][4];
    int arr2[3][4];
    int sum[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter element for arr1["<<i<<"]["<<j<<"] : ";
            cin>>arr1[i][j];
        }
    } 
    for (int i = 0; i <3 ; i++)
    {
        for(int j=0;j<4;j++){
            cout<<"Enter element for arr2["<<i<<"]["<<j<<"] : ";
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of two matrix is : "<<endl;
    SumOfMatrices(arr1, arr2, sum);
    //  for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<sum[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}