#include <iostream>
using namespace std;
string RemoveChar(string str, int index, char ch)
{
    if (index == str.length())
    {
        return "";
    }

    if (str[index] != ch)
    {
        return str[index] + RemoveChar(str, index + 1, ch);
    }

    return RemoveChar(str, index + 1, ch);
}
int main()
{
    string str = "banana";
    cout << RemoveChar(str, 0, 'a');
}