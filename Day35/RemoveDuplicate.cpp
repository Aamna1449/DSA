#include <iostream>
using namespace std;
string RemoveDuplicate(string str, int index)
{
    if (index == str.length() - 1)
    {

        return string(1, str[index]);
    }

    if (str[index] != str[index + 1])
    {
        return str[index] + RemoveDuplicate(str, index + 1);
    }

    return RemoveDuplicate(str, index + 1);
}
int main()
{
    string str = "aabbccdd";
    cout << RemoveDuplicate(str, 0);
}