#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> &arr)
{
    // code here
    int n = arr.size();
    int rightmax = 0;
    int leftmax = 0;
    int water = 0;
    int maxHeight = arr[0], index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxHeight)
        {
            maxHeight = arr[i];
            index = i;
        }
    }
    //  Left Part
    for (int i = 0; i < index; i++)
    {
        if (leftmax > arr[i])
        {
            water += leftmax - arr[i];
        }
        else
        {
            leftmax = arr[i];
        }
    }

    // Right part
    for (int i = n - 1; i > index; i--)
    {
        if (rightmax > arr[i])
        {
            water += rightmax - arr[i];
        }
        else
        {
            rightmax = arr[i];
        }
    }
    return water;
}

int main()
{
    vector<int> arr = {4, 2, 0, 5, 2, 6, 2, 3};
    cout << maxWater(arr);
    return 0;
}