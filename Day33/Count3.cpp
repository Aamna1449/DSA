#include <iostream>
using namespace std;
int CountDigit(int n,int digit)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 10 == digit)
    {
        return 1 + CountDigit(n / 10,digit);
    }
    return CountDigit(n / 10,digit);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int digit;
    cout<<"Enter digit: ";
    cin>>digit;

    cout << "Number of digit is: " << CountDigit(n,digit);
}