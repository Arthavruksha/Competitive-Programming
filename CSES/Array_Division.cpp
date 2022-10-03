// Problem Link - https://cses.fi/problemset/task/1085/

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

	ll n,k;
	cin>>n>>k;
	ll arr[n];
	ll low  = 0;
	ll hi = 1e18;
	ll ans = 1e18;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		low = max(low,arr[i]);
	}

	while(low <= hi ) {

		ll sum=0;
		ll mid = (low+hi)/2;
		ll blocks = 1;

		for(int i=0;i<n;i++) {

			if ( sum+arr[i] > mid) {
				sum = 0;
				blocks ++;
			}
			sum+=arr[i];
		}

		if (blocks > k) {
			low  = mid+1;
		}
		else {
			hi = mid-1;
			ans = mid;
		}


	}

	cout<<ans<<endl;

 
	return 0;
}
