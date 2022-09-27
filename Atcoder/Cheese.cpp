//  Problem Link - https://atcoder.jp/contests/abc229/tasks/abc229_c

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

	ll n,w;
	cin>>n>>w;
	vector <pair<ll,ll>> arr;
	for(int i=0;i<n;i++) {
		ll a , b;
		cin>>a>>b;
		arr.push_back({a,b});
	}
	sort(arr.begin(),arr.end(), greater <>());

	ll sum = 0;
	ll tempsum =0;
	ll times =0;

	for(int i=0;i<n;i++) {
		if ( arr[i].second < w ) {
			tempsum = arr[i].first * arr[i].second ;
			sum+= tempsum;
			w-=arr[i].second;
		}
		else{

			tempsum = w*arr[i].first;
			sum+=tempsum;
			w = 0;

		}
	}
	cout<<sum<<endl;

	return 0;
}

