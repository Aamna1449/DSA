#include <iostream>
// #include <math.h>
using namespace std;
void segregate0and1(int arr[],int n)
{
    // code here
    int st = 0;
    // int n=arr.size();

    int end = n-1;
    while (st < end)
    {
        if (arr[st] == 0)
        {
            st++;
        }
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[st], arr[end]);
                st++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
}

int main()
{

    int arr[7] = {1, 0, 0, 1, 0, 1, 1};
     segregate0and1(arr,7);
    // cout << ans;
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}