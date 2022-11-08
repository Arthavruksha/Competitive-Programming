// Problem Link - https://atcoder.jp/contests/abc257/tasks/abc257_c

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

	vector <pair<ll,char>> arr;
	ll ans = 0;

	string s;
	cin>>s;

	for(ll i=0;i<n;i++){
		ll y;
		cin>>y;
		arr.push_back({y,s[i]});
		if  ( s[i] == '1' ) ans++;
	}

	sort(arr.begin(),arr.end());

	ll x = ans;

	for(int i=0;i<n;i++){
		if ( arr[i].second == '1' ) x--;
		else x++;
		if (i < (n - 1)) {
			if (arr[i].first != arr[i + 1].first)ans = max(ans, x);
		}
		else ans = max(ans, x);
	}

	cout << ans << endl;


	return 0;

}

