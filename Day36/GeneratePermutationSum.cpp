#include <iostream>
#include <vector>
using namespace std;
void GeneratePermutation(int arr[], int n, vector<int> current, bool used[],int k)
{
    if (current.size() == n)
    {
        for (int x : current)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    if (current.size() == 2 && current[0]+current[1]!=k)
    {
        
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            current.push_back(arr[i]);
            GeneratePermutation(arr, n, current, used,k);
            current.pop_back();
            used[i] = false;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> current = {};
    bool used[3] = {false};

    GeneratePermutation(arr, 3, current, used,3);
}