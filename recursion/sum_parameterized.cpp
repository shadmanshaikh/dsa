#include <bits/stdc++.h>
using namespace std; 
int SumP(int i , int n){
    if( i > n) return 0;
    int sum = 0;
    sum += i + SumP(i+1, n);
    return sum;
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout<< SumP(1 , n);
    return 0;
}