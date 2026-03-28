#include <iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n)
{

    int start = 0;

    int end = n - 1;

    while (start <= end)
    {
        int mid = end + (start - end) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int main()
{
    //  int k;
    //     cout << "Enter the target: ";
    //     cin >> k;
    int arr[1000];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the element of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Peak Index in Mountain Array: ";
    cout << peakIndexInMountainArray(arr, n);
    return 0;
}
