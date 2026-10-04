#include <iostream>
using namespace std;

string reverseString(string s)
{
    if (s.length() == 1)
    {
        return s;
    }

    return reverseString(s.substr(1)) + s[0];
}
int main()
{

    string s = "hello";
    cout << "Reverse string: " << reverseString(s);
}