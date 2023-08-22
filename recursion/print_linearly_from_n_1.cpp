#include <bits/stdc++.h>
using namespace std; 
void  PrintNum(int n){
    if(n == 0)return;
    cout<<n<<endl;
    PrintNum(n-1);
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    PrintNum(10);
    return 0;
}