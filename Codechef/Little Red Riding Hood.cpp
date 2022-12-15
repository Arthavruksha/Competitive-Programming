// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO13002

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

bool safe[502][502];

int n;
void marksafe(int x,int y,int z) {
	for(int i=max(1,x-z) ; i<=min(n,x+z) ; i++) {
		for(int j=max(1,y-z) ; j<=min(n,y+z) ; j++ ) {
			if ( abs(x-i) + abs(y-j) <= z ) safe[i][j] = true;
		}
	}
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int m;
	cin>>n>>m;

	int arr[n+1][n+1];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<m;i++){
		ll x,y,z;
		cin>>x>>y>>z;
		marksafe(x,y,z);
	}

	int dp[n+1][n+1]  = {INT_MIN} ;
	// dp[i][j] = max no.of berries she can collect uptil point (i,j)

	dp[0][1] = 0 ;
	dp[1][0] = 0 ;
	safe[0][1] = safe[1][0] = true;

	if ( safe[1][1] == true ) dp[1][1] = arr[1][1] ;
	else {
		cout<<"NO"<<endl;
		return 0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if ( safe[i][j] == true ) {
				if ( safe[i-1][j] and safe[i][j-1] ) {
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + arr[i][j];
				}
				else if ( safe[i-1][j] ) {
					dp[i][j] = dp[i-1][j] + arr[i][j];
				}
				else if ( safe[i][j-1] ) {
					dp[i][j] = dp[i][j-1] + arr[i][j];
				}
			}
		}
	}

	if ( dp[n][n] == INT_MIN ) {
		cout<<"NO"<<endl;
	} 
	else {
		cout<<"YES"<<endl;
		cout<<dp[n][n]<<endl;
	}

	return 0;
}
