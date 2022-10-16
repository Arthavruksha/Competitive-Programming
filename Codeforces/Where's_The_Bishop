// Problem Link - https://codeforces.com/contest/1692/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(){
	char arr[9][9];

	for(int i=1;i<=8;i++) {
		for(int j=1;j<=8;j++) {
			cin>>arr[i][j];
		}
	}

	for(int i=1;i<=8;i++) {
		for(int j=1;j<=8;j++) {
			if ( arr[i][j] == '#' ) {
				if (arr[i-1][j-1] == '#' and arr[i+1][j+1] == '#' and arr[i-1][j+1] == '#' and arr[i+1][j-1] == '#') {
					cout<<i<<" "<<j<<endl;
				}
			}
		}
	}

}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();

	return 0;
}
