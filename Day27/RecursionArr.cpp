#include<iostream>
using namespace std;
void Print(int arr[], int index, int n)
{
    if (index == n)
    {
        return;
    }

    cout << arr[index]<<" ";
    Print(arr, index + 1, n);
}
int main()
{
    int arr[5] = {3, 7, 6, 2, 8};
    Print(arr, 0, 5);
}