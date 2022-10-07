// Problem Link - https://codeforces.com/contest/1735/problem/A

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

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int ans = n/3;
		cout<<ans-2<<endl;
	}


	return 0;
}
