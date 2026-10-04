#include<iostream>
using namespace std;

bool isPalindrome(string s, int left, int right)
{
    // Base case
    if (left >= right)
    {
        return true;
    }

    // Mismatch
    if (s[left] != s[right])
    {
        return false;
    }

    // Move towards center
    return isPalindrome(s, left + 1, right - 1);
}

int main(){
    string s="madam";
    cout<<"Is palindrome: "<<boolalpha << isPalindrome(s,0,s.length()-1);
}