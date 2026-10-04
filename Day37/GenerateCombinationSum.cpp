#include <iostream>
#include <vector>
using namespace std;
void GenerateCombination(int arr[], int index, int n, int sum, int target, vector<int> current)
{
    if (sum == target)
    {
        for (int x : current)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    if(index==n){
        return;
    }
    if (sum > target)
    {
        return;
    }

    GenerateCombination(arr, index + 1, n, sum, target, current);
    current.push_back(arr[index]);
    GenerateCombination(arr, index, n, sum+arr[index], target, current);
    current.pop_back();
}
int main()
{
    int arr[] = {2, 3, 6, 7};
    vector<int> current = {};
    GenerateCombination(arr, 0, 4, 0, 7, current);
}