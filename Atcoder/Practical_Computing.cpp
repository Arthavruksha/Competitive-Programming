// Problem Link - https://atcoder.jp/contests/abc254/tasks/abc254_b

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

	int dp[n][n];

	for(int i=0;i<=n-1;i++) {
		for(int j=0;j<=i;j++){
			if (j==0 or j==i) {
				dp[i][j] = 1;
			}
			else dp[i][j] = dp[i-1][j-1] + dp[i-1][j] ;
		}
	}

	for(int i=0;i<=n-1;i++) {
		for(int j=0;j<=i;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;

}
