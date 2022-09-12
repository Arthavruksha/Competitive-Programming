#include <bits/stdc++.h>
using namespace std;
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 


int main() {
	OnlineJudge();

	long long n,m;
	cin>>n>>m;

	vector<vector<long long>> dp(n+1, vector<long long>(m+1));

	for(int i=1;i<=n;i++) {

		for(int j=1;j<=m;j++){

			dp[i][j] = 1e10;

			if ( i==j ){
				dp[i][j] = 0;
			}

			else {

				for(int k=1;k<=i-1;k++){
					dp[i][j] = min( dp[i][j] , dp[i-k][j] + dp[k][j] + 1  ) ;
				}

				for(int k=1;k<=j-1;k++){
					dp[i][j] = min( dp[i][j]  , dp[i][k] + dp[i][j-k] + 1 ) ;
				}
			}

		}

	}


	cout<<dp[n][m]<<endl;


    return 0;
}
