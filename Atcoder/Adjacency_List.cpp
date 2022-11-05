// Problem Link - https://atcoder.jp/contests/abc276/tasks/abc276_b

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

	ll n,m;
	cin>>n>>m;

	vector <ll> arr[n+1];

	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}

	for(int i=1;i<=n;i++){
		cout<<arr[i].size()<<" ";
		sort(arr[i].begin(),arr[i].end());
		for( auto x:arr[i] ) {
			cout<<x<<" ";
		}
		cout<<endl;
	}


	return 0;

}

