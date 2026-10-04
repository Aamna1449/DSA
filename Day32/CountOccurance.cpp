#include <iostream>
using namespace std;
int countOccurance(int arr[], int target, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int count = countOccurance(arr + 1, target, n - 1);
    if (arr[0] == target)
    {
        return count + 1;
    }
    return count;
}

int main()
{
    int arr[] = {2, 3, 5, 3, 7, 3, 9};
    cout << "Count occurance of target: " << countOccurance(arr, 3, 7);
}