// Problem Link - https://atcoder.jp/contests/abc140/tasks/abc140_b

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

	ll a[n+1],b[n+1],c[n];

	ll sum = 0;

	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		cin>>b[i];
		sum += b[i];
	}

	for(int i=1;i<=(n-1);i++)cin>>c[i];

	for(int i=1;i<=(n-1);i++){
		if ( (a[i] + 1 ) == (a[i+1]) ) {
			sum += c[a[i]] ;
		}
	}

	cout << sum << endl;



	return 0;

}

