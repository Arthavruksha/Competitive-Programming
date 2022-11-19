// Problem Link - https://atcoder.jp/contests/abc235/tasks/abc235_c

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

	map<ll,vector<ll>> arr;
	
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		arr[x].push_back({i+1});
	}

	for(int i=0;i<q;i++){
		ll a,b;
		cin>>a>>b;
		if ( b > arr[a].size() ) cout<<"-1"<<endl;
		else cout<<arr[a][b-1]<<endl;
	}

 
	return 0;
}

