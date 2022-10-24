// Problem Link - https://atcoder.jp/contests/abc205/tasks/abc205_b

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

	ll arr[n+1];
	map <int,int> maps;

	for(int i=1;i<=n;i++) {
		ll x;
		cin>>x;
		maps[x]++;
		arr[i] = x;
	}

	for(int i=1;i<=n;i++){
		if ( maps[i] > 1 ) {
			cout<<"No"<<endl;
			return 0;
		}
	}

	cout<<"Yes"<<endl;


 
	return 0;

}

