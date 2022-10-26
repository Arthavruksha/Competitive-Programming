// Problem Link - https://atcoder.jp/contests/abc149/tasks/abc149_b

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

	ll a,b,k;
	cin>>a>>b>>k;

	if ( k <= a ) cout << a-k << " " << b << endl;
	else if ( k<= (a+b) ) cout << 0 << " " << b - (k-a) << endl;
	else cout << 0 << " " << 0  << endl;



	return 0;

}

