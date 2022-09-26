// Problem Link - https://atcoder.jp/contests/abc212/tasks/abc212_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

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
	

	ll n, m;
	cin>>n>>m;
	ll x[n],y[m];
	for(int i=0;i<n;i++)cin>>x[i];
	for(int i=0;i<m;i++)cin>>y[i];

	sort(x,x+n);
    sort(y,y+m);

	ll sum= 1e10;
	ll temp = 0;

	int i = 0;
	int j = 0;

	while ( (i<n) && (j<m) ) {
		sum = min(sum, abs(x[i]-y[j]));

		if ( x[i] < y[j] ) i ++;
		else j++;

	}

	cout<<sum<<endl;

	return 0;
}

