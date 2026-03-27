#include <iostream>
using namespace std;

pair<int, int> FrstAndLstOccur(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int mid;
    int first = -1, last = -1;

    // First occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Last occurrence
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return {first, last};  // ✅ FIX
}

int main()
{
    int arr[1000], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    pair<int, int> result = FrstAndLstOccur(arr, n, target);

    cout << result.first << " " << result.second;  // ✅ print both
}