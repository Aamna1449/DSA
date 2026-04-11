#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()

{
    int rows=4;
    int cols=3;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    

    // User input:--
    cout << "Enter the element of the matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Print matrix:---
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "Size of the row : "<< matrix.size()<<endl;
    cout << "Size of the col : "<< matrix[0].size()<<endl;

    return 0;
}