#include<iostream>
#include<vector>
using namespace std;

 void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        // Column Wise Reverse
        int n= mat.size();
        for(int j=0;j<n;j++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[start][j],mat[end][j]);
                start++,end--;
            }
        }
        
        // Row Wise reverse
        for(int i=0;i<n;i++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++,end--;
            }
        }
    }

    int main()
{
    int rows,col;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter column: ";
    cin>>col;
    vector<vector<int>> matrix(rows, vector<int>(col));

    cout << "Enter elements :\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(matrix);

    // Print Rotated Matrix
    cout << "\nRotated Matrix:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}