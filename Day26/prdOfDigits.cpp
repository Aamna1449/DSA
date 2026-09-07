#include <iostream>
using namespace std;
int prdOfDigits(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n % 10 * prdOfDigits(n / 10);
}
int main()
{
    int n;
    cout << "Enter digits: ";
    cin >> n;
    cout << "The product of digits: " << prdOfDigits(n);
}