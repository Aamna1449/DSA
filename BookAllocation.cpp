#include <iostream>
using namespace std;
int minPages(int arr[], int k)
{
    // int n = arr.size();
    if (k > 4)
    {
        return -1;
    }
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < 4; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < 4; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }
        if (count <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int main()
{

    int arr[4] = {12, 34, 67, 90};
    // int k = 2;
    cout <<  minPages(arr, 2);
    return 0;
}