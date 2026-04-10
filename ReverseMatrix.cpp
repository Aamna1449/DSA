#include <iostream>
using namespace std;
void ReverseMatrix(int arr[100][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
int main()

{
    int arr[100][100];
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element for arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    ReverseMatrix(arr, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}