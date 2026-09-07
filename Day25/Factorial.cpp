#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {

        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter nth term: ";
    cin >> n;
    cout << "Factorial of nth term: " << factorial(n);
}
