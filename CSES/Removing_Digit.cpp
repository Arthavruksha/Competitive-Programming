// Problem Link - https://cses.fi/problemset/task/1637

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	// state = dp[x] = min no.of ways to make x 0 by subtracting max digit from the x number 
	// transition = dp[i] += dp[i-ans]
    // base case = dp[0] = 1;
    // final sub-problem  = dp[n]

    ll n;
    cin>>n;

    vector <ll> dp(n+1);
    dp[0] = 0;

    for(int i=1;i<=n;i++){
    	string s = to_string(i);
    	int ans = 0;
    	for ( char j : s ) { 
    		int temp = int(j-48) ;
    		ans = max(ans,temp);
    	}
    	dp[i] += dp[i-ans] + 1 ;
    }

    cout<<dp[n]<<endl;


	return 0;
}

