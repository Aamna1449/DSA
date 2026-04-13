#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int x)
{
    // code here
    int N = mat.size();
    int M = mat[0].size();
    int i = 0, j = M - 1;
    while (i < N && j >= 0)
    {
        if (mat[i][j] == x)
        {
            return 1;
        }
        else if (mat[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
int main()
{
    int rows, col;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter column: ";
    cin >> col;
    vector<vector<int>> mat(rows, vector<int>(col));

    cout << "Enter the element of matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    int x;
    cout << "Enter target: ";
    cin >> x;

    bool found = searchMatrix(mat, x);

    if (found)
        cout << "Element Found ";
    else
        cout << "Element Not Found ";
}