#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {5,3,2,1,4};

    // Increasing Order:
    sort(v.begin(), v.end());  // ✅ fixed

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}