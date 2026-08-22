#include <iostream>
#include <vector>
using namespace std;

void lpsfind(vector<int> &lps, string &s)
{
    int pre = 0;

    for (int suf = 1; suf < s.size();)
    {

        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int strStr(string haystack, string needle)
{

    if (needle.empty())
        return 0;

    vector<int> lps(needle.size(), 0);

    lpsfind(lps, needle);

    int first = 0;
    int second = 0;

    while (first < haystack.size() && second < needle.size())
    {

        if (haystack[first] == needle[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
    }

    return (second == needle.size()) ? first - second : -1;
}

int main()
{
    string s1, s2;
    cout << "Enter 1st string: ";
    cin >> s1;
    cout << endl;
    cout << "Enter 2nd string: ";
    cin >> s2;
   cout<<"Index: "<<strStr(s1,s2);
}