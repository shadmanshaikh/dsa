#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if( n ==  0) return 0;
    if( n ==  1) return 1;
    int first = fib(n-1);
    int last = fib(n-2);
    int ans = first + last;
    return ans;
    // cout<< ans << " ";
    // cout<< first <<" "<< last;
}
int main(){
    int n =6;
    // cin >> n;
    cout<<fib(n);
}