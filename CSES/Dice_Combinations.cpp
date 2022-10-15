// Problem Link  - https://cses.fi/problemset/task/1633

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

	int n;
	cin>>n;
	int mod =1e9+7;

	vector <int> dp(n+1,0);

	dp[0] = 1 ;

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=6 && i-j>=0 ;j++) {
			(dp[i] += dp[i-j])%=mod;
		}
	}

	cout<<dp[n]<<endl;


	return 0;
}
