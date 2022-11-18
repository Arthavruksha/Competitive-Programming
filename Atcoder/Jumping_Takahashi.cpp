// Problem Link - https://atcoder.jp/contests/abc240/tasks/abc240_c

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

	ll n,x;
	cin>>n>>x;

	// state = dp[i][j] = is it possible to reach to jth point in ith moves

	vector <ll> a(n+1), b(n+1);

	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];

	vector <vector<ll>> dp(n+1,vector<ll>(x+1,0));

	dp[0][0] = 1;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=x;j++){
			if ( j >= a[i] ) {
				if (dp[i-1][j-a[i]] == 1) dp[i][j] = 1;
			}
			if ( j >= b[i] ) {
				if (dp[i-1][j-b[i]] == 1) dp[i][j] = 1;
			}
		}
	}

	if ( dp[n][x] == 1 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
 
	return 0;
}

