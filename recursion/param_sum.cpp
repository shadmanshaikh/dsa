#include <bits/stdc++.h>
using namespace std; 
void SumP(int i ,int sum){
    if(i < 1){
        cout<<sum<<endl;
        return;
    }
    SumP(i-1, sum+i);
}
int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    SumP(n, 0);
    return 0;
}