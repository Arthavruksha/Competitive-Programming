// Problem Link - https://atcoder.jp/contests/abc263/tasks/abc263_b

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

	int arr[n];

	for(int i=1;i<n;i++) {
		cin>>arr[i];
		arr[i]--;
	}


	vector <int> dp(n);

    dp[0] = 1;

    for(int i=1;i<n;i++) {
    	dp[i] = dp[arr[i]] + 1 ;
    }

    cout<<dp[n-1]-1<<endl;




	return 0;

}
