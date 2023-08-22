#include <bits/stdc++.h>
using namespace std; 
int SumP(int n){
    if(n == 0) return 0;
    int sum = 0;
    sum += n + SumP(n-1);
    return sum;
}
 int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout<< SumP(n);
    return 0;
}