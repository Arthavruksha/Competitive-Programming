//  Problem Link - https://cses.fi/problemset/task/1635/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
#define INF 1e9
 
 
int main() {
    int n,x;
    cin>>n>>x;
    vector <int> coin (n);
    vector <ll> dp (x+1,0);
    
    for (int i=0;i<n;i++){
        cin>>coin[i];
    }
    
    dp[0] = 1;
    
    for (int i=1;i<=x;i++){
        for (int j=0; j<n;j++){
            if (i-coin[j] >= 0 ){
                (dp[i] += dp[i-coin[j]] ) %= mod ;
            }
        }
    }
    
    if (dp[x] == INF ) cout<<-1<<endl;
    else cout<<dp[x]<<endl;
 
    return 0;
}
