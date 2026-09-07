#include <iostream>
using namespace std;
void print1ToN(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    print1ToN(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    print1ToN(n);
}