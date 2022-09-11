//  Problem Link - https://cses.fi/problemset/task/1636

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
    
    for (int i=0;i<n;i++){
        for (int j=0; j<=x;j++){
            if ( j-coin[i] >=0 ){
                (dp[j] += dp[ j-coin[i]] ) %= mod ;
            }
        }
    }
    
    // if (dp[x] == INF ) cout<<-1<<endl;
    // else cout<<dp[x]<<endl;
    cout<<dp[x]<<endl;
 
    return 0;
}
