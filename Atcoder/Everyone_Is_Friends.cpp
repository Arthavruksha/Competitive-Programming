// Problem Link - https://atcoder.jp/contests/abc272/tasks/abc272_b

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

		ll len;
		cin>>len;

		ll temparr[len+1];
		for(int j=0;j<len;j++) cin>>temparr[j];

		for(int j=0;j<len;j++){
			for(int k=0;k<len;k++){
				if ( j != k ) arr[temparr[j]].insert(temparr[k]);
			}
		}
	}

	for( int i=1;i<=n;i++) {
		if ( arr[i].size()  != (n-1) ) {
			cout<<"No"<<endl;
			return 0;
		}
	}

	cout<<"Yes"<<endl;


	return 0;

}

