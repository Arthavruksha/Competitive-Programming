// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO15003

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

bool cmp(pair<ll,ll> a , pair<ll,ll> b ) {
	if ( a.second == b.second ) {
		return a.first >= b.first ;
	}
	else return a.second < b.second ;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n;
	cin>>n;

	vector <pair<ll,ll>> arr;

	for(int i=0;i<n;i++){
		ll x,y;
		cin>>x>>y;
		arr.push_back({x,y});
	}

	sort(arr.begin(),arr.end(),cmp);

	ll prev = arr[0].second;
	ll ans = 1;

	for(int i=0;i<n;i++){
		// cout<<arr[i].first<<" "<<arr[i].second<<endl;
		if ( arr[i].first > prev ) {
			ans++;
			prev = arr[i].second;
		}
	}

	cout<<ans<<endl;

	
	return 0;
}
