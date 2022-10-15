// Problem Link - https://atcoder.jp/contests/abc237/tasks/abc237_a

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

	ll n;
	cin>>n;
	
	ll m = (ll) 1<<31;

	if (n>=-m and n<m) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


	return 0;
}
