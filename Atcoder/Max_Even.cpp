// Problem Link - https://atcoder.jp/contests/abc272/tasks/abc272_c

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
	vector <ll> even, odd;

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		if ( x%2 == 0 ) even.push_back(x);
		else odd.push_back(x);
	}

	sort(even.begin(),even.end(),greater<ll>());
	sort(odd.begin(),odd.end(),greater<ll>());

	ll evenwala , oddwala ;

	if ( even.size() >= 2  ) evenwala = ( even[0] + even[1] ) ;
	else if ( even.size() == 1 ) evenwala = even[0];
	else evenwala = 0;

	if ( odd.size() >= 2  ) oddwala = ( odd[0] + odd[1] ) ;
	else if ( odd.size() == 1 ) oddwala = odd[0];
	else oddwala = 0;

	if ( max(evenwala,oddwala)%2 == 0 ) cout << max(evenwala,oddwala) << endl;
	else cout << "-1" << endl;


	return 0;

}

