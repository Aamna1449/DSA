#include <iostream>
using namespace std;
int squareSum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n*n + squareSum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The sum of square natuaral number is: " << squareSum(n);
}