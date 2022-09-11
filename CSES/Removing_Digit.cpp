// Problem Link - https://cses.fi/problemset/task/1637/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
#define INF 1e9
 
 
int main() {
    int n;
    cin>>n;
    vector <ll> dp (n+1,1e9);
    
    
    dp[0] = 0;
    
    for (int i =0;i<=n;i++){
        for (char c : to_string(i) ){
            dp[i] = min( dp[i] , dp[ i - (c-'0') ]+1 );
        }
    }
    
    cout<<dp[n]<<endl;
 
    return 0;
}
