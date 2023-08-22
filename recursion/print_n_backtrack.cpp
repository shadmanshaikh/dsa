#include <bits/stdc++.h>
using namespace std; 
void printNum(int n , int i){
    if(n<i)return;
    printNum(n, i+1);
    cout<<i<<endl;
}
 int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    printNum(n , 1);
    return 0;
}