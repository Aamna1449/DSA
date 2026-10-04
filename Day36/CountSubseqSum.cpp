#include <iostream>
using namespace std;
int Count(int arr[], int index, int sum, int k, int n)
{
    if (index == n)
    {
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }
    return Count(arr,index+1,sum+arr[index],k,n)+Count(arr,index+1,sum,k,n);
}
int main()
{
    int arr[] = {1, 2, 1};
    cout << Count(arr, 0, 0, 2, 3);
}