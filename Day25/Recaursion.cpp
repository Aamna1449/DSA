#include<iostream>
using namespace std;
void str(int n){
    if(n>0 && n<11){
        cout<<"CoderArmy";
        cout<<endl;
    }
    str(n+1);
}
void odd(int n){
    if(n==1){
        cout<<n;
        return;
    }
    if(n%2!=0){
        cout<<n<<endl;
        // return;
    }
    // cout<<n<<endl;
    odd(n-1);
    
}
void print(int n){
   if(n==0){
    return ;
   }
   print(n-1);
   cout<<n<<" ";
}
int main()
{
    // print CodeArmy 10 times using recursion
    str(1);

    // print all odd number from n to 1
    odd(10);

    // Print all number from 1 to n using recursion
    print(5);



    
} 
