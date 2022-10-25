// Problem Link - https://atcoder.jp/contests/abc179/tasks/abc179_b

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

	vector <pair<ll,ll>> arr;
	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		arr.push_back({a,b});
	}

	for(int i=0;i<n-2;i++){
		if ( (arr[i].first == arr[i].second) and (arr[i+1].first == arr[i+1].second) and (arr[i+2].first == arr[i+2].second ) ) {
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;


	return 0;

}

