#include <iostream>
using namespace std;

int main()
{
    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size();

    // Append Operation
    // string s1 = "Rohit";
    // string s2 = "Mohit";

    // s1 = s1.append(s2);
    // cout << s1<<endl;

    // Escape Character 

    // string S = "He is a \"good\" boy";

    // cout << S << endl;

    // Reverse String
    // int start=0,end=s.size()-1;

    // while(start<end){
    //     swap(s[start],s[end]);
    //     start++;
    //     end--;
    // }
    // cout<<s;

    // Check Palindrome

    string s3="naman";
   int start=0,end=s3.size()-1;
    while(start<end){
        if(s3[start]!=s3[end]){
            cout<<"Not a palindrome";
            return 0;
        }

       

        start++,end--;

    }
     cout<<"It is a Palindrome";
}