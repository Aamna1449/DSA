#include <iostream>
using namespace std;
void GenerateSubseq(string str, int index, string current)
{
    if (index == str.length())
    {
        cout << current<<" ";
        return;
    }

    GenerateSubseq(str, index + 1, current + str[index]);
    GenerateSubseq(str, index + 1, current);
}
int main()
{
    string str = "abc";

    GenerateSubseq(str, 0, "");
}