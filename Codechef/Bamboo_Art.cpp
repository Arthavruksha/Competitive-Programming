// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO16002?tab=statement

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

	ll arr[n];
	unordered_set <ll> s(n);
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		s.insert(arr[i]);
	}

	sort(arr,arr+n);
	ll ans = 0 ;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll diff = arr[j]-arr[i];
			ll count = 2;
			ll nextelement = arr[j]+diff;
			while ( s.find(nextelement) != s.end() ) {
				count++;
				nextelement = nextelement + diff;
			}
			ans =  max(ans,count);
		}
	}

	cout<<ans<<endl;
	
	return 0;
}
