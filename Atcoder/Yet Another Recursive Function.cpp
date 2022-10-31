// Problem Link - https://atcoder.jp/contests/abc275/tasks/abc275_d

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

map <ll,ll>  maps;

ll f(ll n){
	if ( n == 0 ) return 1; 
	if ( maps.count(n) ) return maps[n] ;
	return maps[n]  = ( f(n/2) + f(n/3) ) ;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n;
	cin>>n;
	cout<<f(n)<<endl;

	return 0;

}

