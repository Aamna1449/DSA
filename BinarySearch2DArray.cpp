#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(vector<vector<int>> &mat, int target)
{
    int N = mat.size();
    int M = mat[0].size();
    int start = 0, end = N * M - 1;
    int mid, row_index, col_index;
    while (start <= end)
    {
        mid = (start + end) / 2;
        row_index = mid / M;
        col_index = mid % M;
        if (mat[row_index][col_index] == target)
        {
            return 1;
        }
        else if (mat[row_index][col_index] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
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

       bool found = BinarySearch(mat, x);

    if (found)
        cout << "Element Found ";
    else
        cout << "Element Not Found ";

}