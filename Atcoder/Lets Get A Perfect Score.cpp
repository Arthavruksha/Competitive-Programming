// Problem Link - https://atcoder.jp/contests/abc282/tasks/abc282_b

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

	ll n,m;
	cin>>n>>m;

	ll arr[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;
			cin>>a;
			if ( a == 'o' ) {
				arr[i][j] = 1 ;
			}
			else {
				arr[i][j] = 0 ;
			}
		}
	}

	ll ans = 0;


	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll count = 0;
			for(int k=0;k<m;k++){
				if ( arr[i][k] == 1 or arr[j][k] == 1 ) {
					continue;
				}
				else count++;
			}
			if ( count == 0 ) ans++;
		}
	}

	cout<<ans<<endl;


	return 0;
}
