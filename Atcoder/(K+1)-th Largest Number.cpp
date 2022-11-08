// Problem Link - https://atcoder.jp/contests/abc273/tasks/abc273_c

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

	map <ll,ll> maps;

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		maps[x]++;
	}

	ll count = 0;

	for(auto it = maps.rbegin() ; it != maps.rend() ; it++ ) {
		count++;
		cout << it->second << endl;
	}

	for(int i=0;i<(n-count);i++) cout << 0 << endl;



	return 0;

}

