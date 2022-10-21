// Problem Link - https://atcoder.jp/contests/abc253/tasks/abc253_b

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

	int h,w;
	cin>>h>>w;

	char a [h][w];

	vector <pair<int,int>> dp;

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if (a[i][j] == 'o') {
				dp.push_back({i,j});
			}
		}
	}

	cout << abs(dp[0].first - dp[1].first ) + abs (dp[0].second - dp[1].second) << endl; 

	return 0;

}

