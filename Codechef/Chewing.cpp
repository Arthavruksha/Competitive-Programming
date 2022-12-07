// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO13003

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
	for(int i=0;i<n;i++)cin>>arr[i];

	sort(arr,arr+n);

	
	ll ans = 0,temp = 0;
	ll i=0,j=n-1;

	while(j>i and arr[i] <= k ) {
		if ( arr[i] + arr[j] < k ) {
			ans += (j-i);
			i++;
		}
		else j--;

	}

	cout<<ans<<endl;
	
	return 0;
}
