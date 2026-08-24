#include<iostream>
#include<vector>
using namespace std;

    int getLPSLength(string &s) {
       
        vector<int> lps(s.size(), 0);

        int pre = 0;
        int suf = 1;

        while(suf < s.size()) {

            if(s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            }
            else {
                if(pre == 0) {
                    lps[suf] = 0;
                    suf++;
                }
                else {
                    pre = lps[pre - 1];
                }
            }
        }

        return lps[s.size() - 1];
    }

    int main(){
        string s;
        cout<<"Enter the string: ";
        cin>>s;
        cout<<endl;

        cout<<"Longest Prefix Suffix: "<<getLPSLength(s);
    }