// Problem Link - https://codeforces.com/contest/1739/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n,m;
	cin>>n>>m;
	cout<<(n+1)/2<<" "<<(m+1)/2<<endl;
}

 

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}

