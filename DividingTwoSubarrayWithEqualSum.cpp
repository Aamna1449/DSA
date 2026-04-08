#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Dividing(vector<int>& arr, int n)
{
    int total_sum = 0;

    for (int i = 0; i < n; i++)
        total_sum += arr[i];

    int prefix = 0;

    for (int i = 0; i < n - 1; i++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix;

        if (ans == prefix)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << Dividing(v, n);
}