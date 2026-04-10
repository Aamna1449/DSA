#include<iostream>
using namespace std;
void DiagonalSum(int arr[][100],int row,int col){
    int first=0;
    int sec=0;
    // First Diagonal Sum
    int i=0;
    while(i<row){
        first+=arr[i][i];
        i++;
    }

    // Second Diagonal Sum
    i=0;
    int j=col-1;
    while(j>=0){
        sec+=arr[i][j];
        i++;
        j--;

    }
    cout<<"First Diagonal Sum is : "<<first<<endl;
    cout<<"Second Diagonal Sum is : "<<sec<<endl;
}
int main(){
    int arr[100][100];
    int row,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of column: ";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the element of arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
    DiagonalSum(arr,row,col);
    return 0;
}