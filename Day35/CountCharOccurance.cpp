#include <iostream>
using namespace std;
int CountOccurance(string str, int index, char ch)
{
    if (index == str.length())
    {
        return 0;
    }

    if (str[index] == ch)
    {
        return 1 + CountOccurance(str, index + 1, ch);
    }

    return CountOccurance(str, index + 1, ch);
}
int main()
{
    string str = "programming";
    cout << CountOccurance(str, 0, 'g');
}