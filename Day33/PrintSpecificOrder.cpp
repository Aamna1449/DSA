#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 1)
    {
        cout << 1<<" ";
        return;
    }
    cout << n<<" ";
    print(n - 1);
    cout << n<<" ";
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    print(n);
}