#include <bits/stdc++.h>
using namespace std; 

void removeDuplicates(std::string& str, int slow, int fast) {
    if (fast >= str.length()) {
        str.resize(slow + 1); 
        return;  
    }

    if (str[slow] != str[fast]) {
        slow++;
        str[slow] = str[fast];
    }

    removeDuplicates(str, slow, fast + 1);
    // removeDuplicates(str, slow, fast + 1);
}
string removeDuplicate(string &s)
{
    // Write your code here
    if (s.empty()) {
        return s;  
    }
    // removeDuplicates(s, 0, 1)<<endl;
    removeDuplicates(s, 0, 1);
    return s;
    
}

int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "aazbbby";
    // cin >> s;
    removeDuplicate(s);
    cout << s;

    return 0;
}