#include <bits/stdc++.h>
using namespace std; 
void PrintNum(int n){
    if(n == 0)return;
    PrintNum(n-1);
    cout<<n<<endl;
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    PrintNum(10);
    return 0;
}