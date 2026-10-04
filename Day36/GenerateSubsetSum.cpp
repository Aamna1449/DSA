#include <iostream>
#include <vector>
using namespace std;
void GenerateSubset(int arr[], int index, int n, vector<int> current)
{
    if (index == n)
    {
        for (int x : current)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

        current.push_back(arr[index]);
    GenerateSubset(arr, index + 1, n, current);
    current.pop_back();
    GenerateSubset(arr, index + 1, n, current);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> current = {};
    GenerateSubset(arr, 0, 3, current);
}