// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO12001

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
	for(int i=0;i<n;i++)cin>>arr[i];

	vector <ll> opens;
    ll maxdepth = 0 , maxdepthi = 0 , maxsymbols = 0 , maxsymboli = 0;

    for(int i=0;i<n;i++){
    	if ( arr[i] == 1 ) {
    		opens.push_back(i);
    		if ( opens.size() > maxdepth ) {
    			maxdepth =  opens.size();
    			maxdepthi = i+1;
    		}
    	}
    	else {
    		ll cur = (i-opens.back())+1;
    		if ( cur > maxsymbols ) {
    			maxsymbols = cur;
    			maxsymboli = opens.back()+1;
    		}
    		opens.pop_back();
    	}
    }

    cout<<maxdepth<<" "<<maxdepthi<<" "<<maxsymbols<<" "<<maxsymboli<<endl;


	return 0;
}
