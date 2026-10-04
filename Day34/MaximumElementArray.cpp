#include <iostream>
using namespace std;
int Max(int arr[], int index, int n)
{
    if (index == n)
    {
        return arr[index];
    }

    return max(arr[index], Max(arr, index + 1, n));
}
int main()
{
    int arr[] = {4, 7, 2, 9, 1};
    cout <<"Maximum Element in array: "<< Max(arr, 0, 4);
}