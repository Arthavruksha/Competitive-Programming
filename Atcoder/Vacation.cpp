// Problem Link - https://atcoder.jp/contests/dp/tasks/dp_c

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

	int dp[n+1][3];
	int a[n + 1], b[n + 1], c[n + 1];

	for(int i=1;i<=n;i++) {
		cin>>a[i]>>b[i]>>c[i];
		dp[i][0] = dp[i][1] = dp[i][2] = 0;
	}

	dp[1][0] = a[1];
	dp[1][1] = b[1];
	dp[1][2] = c[1];

	for(int i=2;i<=n;i++) {
		dp[i][0] = max(dp[i-1][1] , dp[i-1][2]) + a[i];
		dp[i][1] = max(dp[i-1][0] , dp[i-1][2]) + b[i];
		dp[i][2] = max(dp[i-1][0] , dp[i-1][1]) + c[i];
	}

	for(int i=1;i<=n;i++) cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;

	cout<< max( {dp[n][0] , dp[n][1] , dp[n][2]} ) << endl;



	return 0;
}
