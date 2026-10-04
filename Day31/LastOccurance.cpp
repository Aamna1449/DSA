#include<iostream>
using namespace std;
int lastOccurrence(int arr[], int target, int n)
{
    if (n == 0)
    {
        return -1;
    }

    int ans = lastOccurrence(arr + 1, target, n - 1);

    if (ans == -1)
    {
        if (arr[0] == target)
        {
            return 0;
        }
        return -1;
    }

    return ans + 1;
}
int main(){
    int arr[]={5,3,7,3,9};
    cout<<"Last Occurance: "<<lastOccurrence(arr,3,5);
}