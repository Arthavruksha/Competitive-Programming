// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO12002

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

	ll n,x,y;
	cin>>n>>x>>y;

	vector <ll> v(x),w(y);
	vector <pair<ll,ll>> arr;
	vector <pair<ll,ll>> arr1;


	for(int i=0;i<n;i++){
		ll x,y;
		cin>>x>>y;
		arr.push_back({x,y});
	}

	for(int i=0;i<x;i++)cin>>v[i];
	for(int i=0;i<y;i++)cin>>w[i];

	ll ans = 1e10;

    sort(v.begin(),v.end());
    sort(w.begin(),w.end());

    for(int i=0;i<n;i++){
    	
    	ll low = 0 , high = 0 , temp = 1e10;

    	auto it = upper_bound(v.begin(), v.end(), arr[i].first );
    	auto it1 = lower_bound(w.begin(),w.end(), arr[i].second );

    	if ( it != v.begin() ) {
    		it--;
    		low = *it;
    	}  
    	else continue;

    	if ( it1 != w.end() ) {
    		high = *it1;
    	}
    	else continue;

    	temp =  (high-low)+1;
    	ans = min(ans,temp);

    }

    cout<<ans<<endl;
	
	
	return 0;
}
