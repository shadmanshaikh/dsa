#include <bits/stdc++.h>
using namespace std; 
void PrintMyName(int n){
    if(n == 0) return;

    string s = "shadman";
    cout<< s <<endl;
    PrintMyName(n-1);
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    PrintMyName(5);
    // return 0;
}