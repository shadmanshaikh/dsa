#include <bits/stdc++.h>
using namespace std; 

bool isPalindrome(string s , int i , int j){
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return isPalindrome(s, i+1, j-1);
    
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if(isPalindrome(s, 0, s.size()-1)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}