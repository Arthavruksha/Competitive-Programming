// Problem Link - https://atcoder.jp/contests/abc154/tasks/abc154_b

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

	ll h,n;
	cin>>h>>n;

	ll arr[n];

	for(ll i=0;i<n;i++)cin>>arr[i];

	for(ll i=0;i<n;i++){
		h-=arr[i];
	}

	if ( h<=0 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;

}

