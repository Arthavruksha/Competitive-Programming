// Problem Link - https://atcoder.jp/contests/abc275/tasks/abc275_b

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

	ll mod = 998244353;

	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;

	a%=mod , b%=mod , c%=mod , d%=mod , e%=mod , f%=mod ;

	ll x = ( a * b) % mod ;
	x = ( x * c ) % mod ;
	ll y = ( d * e ) % mod ;
	y = ( y * f ) % mod ;

	ll ans = (x+mod-y)%mod ;

	cout << ans << endl;


	return 0;

}

