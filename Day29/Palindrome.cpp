#include <iostream>
using namespace std;
int ReverseDigit(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    int digit = n % 10;
    return ReverseDigit(n / 10, rev * 10 + digit);
}
int CheckPalindrome(int n){
    int org=n;
    int rev=ReverseDigit(n,0);
    if(org==rev){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
   cout<< CheckPalindrome(n);
}