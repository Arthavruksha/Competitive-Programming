// Problem Link - https://atcoder.jp/contests/abc208/tasks/abc208_b

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

	vector <ll> coins(10,1);

	for(int i=1;i<10;i++){
		coins[i] = coins[i-1] * (i + 1) ;
	}

	ll intmax = 1e7 + 10;

	vector <ll> dp(intmax,1e10);
	dp[0] = 0;

	for(int i=1;i<intmax;i++){
		for (const int x : coins) {
			if (x>i) break;
			dp[i] = min(dp[i],dp[ i - x] +1 );
		}
	}

	cout<<dp[n]<<endl;

 
	return 0;

}

