// Problem Link - https://atcoder.jp/contests/abc210/tasks/abc210_a
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

	ll n,a,x,y;
	cin>>n>>a>>x>>y;

	ll first = a*x;
	ll second = (n-a)*y;
	if (n<=a) cout<<n*x<<endl;
	else cout<<first+second<<endl;


	return 0;
}
