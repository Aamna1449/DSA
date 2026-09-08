#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    return min(arr[n - 1], min(arr, n - 1));
}
int main()
{
    int arr[5] = {2, 4, 9, 6, 3};
    cout << "Minimum Element: " << min(arr, 5);
}