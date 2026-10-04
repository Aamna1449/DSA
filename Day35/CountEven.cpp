#include <iostream>
using namespace std;
int CountEven(int arr[], int index, int n)
{
    if (index == n)
    {
        return 0;
    }
    if (arr[index] % 2 == 0)
    {
        return 1 + CountEven(arr, index + 1, n);
    }

    return CountEven(arr, index + 1, n);
}

int main()
{
    int arr[] = {2, 7, 4, 9, 6, 3};
    cout << "Count Even Element: " << CountEven(arr, 0, 6);
}