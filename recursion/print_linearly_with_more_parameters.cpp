#include <bits/stdc++.h>
using namespace std; 
void PrintNum(int i , int N){
    if(i > N) return;
    cout<< i << endl;
    PrintNum(i+1, N);
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    PrintNum(1 , 10);
    return 0;
}