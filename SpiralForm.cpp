#include <iostream>
#include <vector>
using namespace std;

void Spiral(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (left <= right && top <= bottom)
    {
        // Top row
        for (int j = left; j <= right; j++)
            ans.push_back(matrix[top][j]);
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        // Bottom row
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;
        }

        // Left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }

    // Print spiral
    cout << "\nSpiral Order: ";
    for (int x : ans)
        cout << x << " ";
}

int main()
{
    vector<vector<int>> matrix(6, vector<int>(6));

    cout << "Enter elements (4x3):\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    Spiral(matrix);
}