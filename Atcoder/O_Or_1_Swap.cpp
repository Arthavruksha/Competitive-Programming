// Problem Link - https://atcoder.jp/contests/abc135/tasks/abc135_b

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

	ll arr[n],sorted[n];

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		arr[i] = x;
		sorted[i] = x;
	}

	sort(sorted,sorted+n);

	ll count = 0;

	for(int i=0;i<n;i++){
		if ( arr[i] != sorted[i] ) count++;
	}

	if ( count == 2 or count == 0 ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
 
	return 0;

}

