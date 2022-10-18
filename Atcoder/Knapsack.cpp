// Problem Link - https://atcoder.jp/contests/dp/tasks/dp_d

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

// dp[x] = maximum possible sum of values that can be stored in a knapsack of size x;
// dp[i] = max(dp[i], dp[i-arr[j]])
// dp[0] = 0
// dp[n] 

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n,w;
	cin>>n>>w;

	vector <pair<ll,ll>> arr(n+1);

	for(int i=1;i<=n;i++){
		cin >> arr[i].first >> arr[i].second ;
	}

	sort(arr.begin()+1,arr.begin()+1+n);

	vector <ll> dp(w+1,0);

	for(int i=1;i<=n;i++){
		for(int j=w;j>=arr[i].first;j--) {
			dp[j] = max(dp[j], arr[i].second + dp[j-arr[i].first ] );
		}
	}

	cout<<dp[w]<<endl;
	


	return 0;

}
