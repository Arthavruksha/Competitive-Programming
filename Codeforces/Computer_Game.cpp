// Problem Link - https://codeforces.com/problemset/problem/1598/A


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

	int t;
	cin>>t;
	while(t--) {

		int n;
		cin>>n;

		int dp[2][n];

		for(int i=0;i<2;i++){
			string num;
			cin>>num;
			for(int  j=0 ;j<n;j++) {
				dp[i][j] = num[j];
			}
		}

		string ans = "YES";
		for(int i=0;i<n;i++){

			if ( dp[0][i] == '1' and dp[1][i] == '1' ){
				ans = "NO";
				break;
			}
		}

		cout<<ans<<endl;

	}

    return 0;
}

