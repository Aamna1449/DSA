#include <iostream>
#include <climits>
using namespace std;
void MaxSum(int arr[][100], int row, int col)
{
    int sum = INT_MIN;
    int index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
            if (sum < total)
            {
                sum = total;
                index = i;
            }
        }
    }
    cout << "Maximum sum is " << sum << " and it is in row " << index << endl;
}
int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;
    int arr[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element for arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    MaxSum(arr, row, col);
    return 0;
}