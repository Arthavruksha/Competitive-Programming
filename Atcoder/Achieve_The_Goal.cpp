// Problem Link - https://atcoder.jp/contests/abc151/tasks/abc151_b

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

	ll n,k,m;
	cin>>n>>k>>m;

	ll sum = 0;
	ll maxval = k*n;

	for(int i=0;i<n-1;i++){
		ll x;
		cin>>x;
		sum+=x;
	}

	ll final = (m*n) - sum;

	if ( final <= k ){
		if ( final < 0 ) cout<<"0"<<endl;
		else cout<<final<<endl;
	}
	else cout<<"-1"<<endl;



	return 0;

}

