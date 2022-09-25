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

	ll n,m,k;
	cin>>n>>m>>k;

	ll arr[n][m];

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>arr[i][j];
		}
	}

	ll dp[m];
	double sum = 0;

	for(int j=0;j<m;j++) {
		sum = 0;
		for(int i=0;i<n;i++) {
			sum+=arr[i][j];
		}
		dp[j] = round(sum/n); 

	}

	ll finalsum = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			finalsum = finalsum + ( abs(arr[i][j] - dp[j] ) * abs(arr[i][j] - dp[j] ) );
		}
	}

	cout<<finalsum<<endl;

	return 0;
}

