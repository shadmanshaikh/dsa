#include <bits/stdc++.h>
using namespace std; 
void ReverseArr(vector<int>& v , int i ,int n){
    int mid = n/2;
    if(i >= mid) return;
    swap(v[i], v[n-i-1]);
    ReverseArr(v, i+1 , n);
}
 int main()
{    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int n = v.size();
    ReverseArr(v, 0 ,n);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}