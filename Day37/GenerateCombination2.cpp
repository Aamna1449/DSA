#include <iostream>
#include <vector>
using namespace std;
void GenerateCombination(int arr[], int index, int n, int k, vector<int> current)
{
    if (current.size() == k)
    {
        for (int x : current)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    if (index == n)
    {
        return;
    }
    for (int i = index; i < n; i++)
    {
        current.push_back(arr[i]);
        GenerateCombination(arr, i + 1, n, k,current);
        current.pop_back();
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> current = {};
    GenerateCombination(arr,0,3,2,current);
}