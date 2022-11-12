// Problem Link - https://atcoder.jp/contests/abc277/tasks/abc277_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

ll n,ans;
map <ll,vector<ll>> arr;
map<int,bool> vis;

void dfs(ll k){
	ans = max(ans,k);
	vis[k] = true;
	for(auto i : arr[k]) {
		if ( vis[i] == false ) dfs(i);
	}
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cin>>n;

	for(int i=0;i<n;i++){
		ll x,y;
		cin>>x>>y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}

	dfs(1);
	cout<<ans<<endl;


	return 0;
}

