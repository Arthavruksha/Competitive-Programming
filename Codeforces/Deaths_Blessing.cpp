// Problem Link - https://codeforces.com/contest/1749/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(){

	ll n;
	cin>>n;
	ll ans = 0;
	ll lar = 0;

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		ans+=x;
	}
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		ans+=x;
		lar = max(lar,x);
	}

	cout<<ans-lar<<endl;


}



int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();



	return 0;

}
