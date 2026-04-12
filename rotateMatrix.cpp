#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // Transpose Matrix
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Reverse Matrix
        for(int i=0;i<n;i++){
            int start=0,end=n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);

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

    rotate(matrix);

    // Print Rotated Matrix
    cout << "\nRotated Matrix(90deg):\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}