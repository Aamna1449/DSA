#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            return mid;
            break;
        }
        else if (arr[mid] < k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int k;
    cout << "Enter the key:";
    cin >> k;
    cout << "Enter the Element of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << BinarySearch(arr, n, k);
}