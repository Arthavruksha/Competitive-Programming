// Problem Link - https://atcoder.jp/contests/abc278/tasks/abc278_c

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

	ll n,q;
	cin>>n>>q;

	map<ll,set<ll>>arr;

	for(int i=0;i<q;i++){
		ll a,b,c;
		cin>>a>>b>>c;

		if ( a == 1  ) {
			arr[b].insert(c);
		}

		else if ( a==3 ) {
			if ( arr[b].count(c) and arr[c].count(b) ) {
				cout<<"Yes"<<endl;
			} 
			else cout<<"No"<<endl;
		}

		else if ( a==2 ) {
			if ( arr[b].count(c) ) arr[b].erase(c);
		}
	}

 
	return 0;
}

