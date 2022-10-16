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

void solve() {
	int a,b,c;
	cin>>a>>b>>c;

	int mid = 2*abs(a-b);

	if (a > mid or b> mid or c>mid) cout<<"-1"<<endl;
	else {
		int d = mid/2 + c;
		while(d>mid) d-=mid;
		cout<<d<<endl; 
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
