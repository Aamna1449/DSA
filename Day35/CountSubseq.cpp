#include <iostream>
using namespace std;
int CountSubseq(string str, int index)
{
    if (index == str.length())
    {
        return 1;
    }

    return CountSubseq(str, index + 1) + CountSubseq(str, index + 1);
}
int main()
{
    string str = "abc";
    cout << CountSubseq(str, 0);
}