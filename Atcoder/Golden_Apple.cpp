// Problem Link - https://atcoder.jp/contests/abc134/tasks/abc134_b

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

	ll n,d;
	cin>>n>>d;

	ll ans = (n+(2*d)) / ((2*d)+1) ;

	cout << ans << endl;

	return 0;

}

