// Problem Link -https://www.codechef.com/IARCSJUD/problems/TILES01

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

	// state = dp[i] - no.of unique binary arrangement adhering the constraint of length n
	// transition = dp[i] = ( dp[i-1]  + dp[i-2]) %mod
	// base case = dp[0] = 1 and dp[1] = 2
	// final subproblem = dp[n]

	ll n;
	cin>>n;

	ll mod = 15746 ;

	vector <ll> dp(n+2);

	dp[1] = 1;
	dp[2] = 2;

	for(int i=3;i<=n;i++){
		dp[i] = ( dp[i-1] + dp[i-2] ) % mod ;
		// cout<<dp[i]<<ebndl;
	}

	cout<<dp[n]<<endl;



	return 0;
}
