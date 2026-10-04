#include <iostream>
using namespace std;
int Min(int arr[], int index, int n)
{
    if (index == n)
    {
        return arr[index];
    }
    return min(arr[index], Min(arr, index + 1, n));
}
int main()
{
    int arr[] = {8, 3, 6, 1, 5};
    cout <<"Minimum element in array: "<< Min(arr, 0, 4);
}
