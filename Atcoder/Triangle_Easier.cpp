// Problem Link - https://atcoder.jp/contests/abc262/tasks/abc262_b

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

	vector <set<ll>> arr(n+1);

	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		arr[x].insert(y);
		arr[y].insert(x);
	}

	ll count = 0;

	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=j;k<=n;k++){
				if ( arr[i].count(j) and arr[j].count(k) and arr[k].count(i) ) count++;
			}
		}
	}

	cout<<count<<endl;

	
	return 0;

}

