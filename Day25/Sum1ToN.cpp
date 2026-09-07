#include <iostream>
using namespace std;

int sum1ToN(int n)
{
    if (n == 0)
    {

        return 0;
    }

    return n + sum1ToN(n - 1);
}
int main()
{
    int n;
    cout << "Enter nth term: ";
    cin >> n;
    cout << "Sum of nth term: "<< sum1ToN(n);
}
