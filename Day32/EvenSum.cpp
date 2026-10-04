#include<iostream>
using namespace std;
int evenSum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int sum = evenSum(arr, n - 1);

    if (arr[n - 1] % 2 == 0)
    {
        return sum + arr[n - 1];
    }
    else
    {
        return sum;
    }
}

int main(){
    int arr[]={2,5,8,3,6,7};
    cout<<"Sum of Even element: "<<evenSum(arr,6);
}