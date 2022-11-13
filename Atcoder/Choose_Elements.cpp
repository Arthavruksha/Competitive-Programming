// Problem Link - https://atcoder.jp/contests/abc245/tasks/abc245_c

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

	ll n,k;
	cin>>n>>k;

	ll a[n],b[n];

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	vector <ll> ap(n,false) , bp(n,false);

    // ap[i] == true means whether its possible to take ith value from a array or not
    // bp[i] == true means whether its possible to take ith value from b array or not

	ap[0] = true, bp[0] = true;

	for(int i=1;i<n;i++){
		if ( ap[i-1] ) {
			if ( abs(a[i-1]-a[i]) <= k ) ap[i] = true;
			if ( abs(a[i-1]-b[i]) <= k ) bp[i] = true;
		}
		if ( bp[i-1] ) {
			if ( abs(b[i-1]-b[i]) <= k ) bp[i] = true;
			if ( abs(b[i-1]-a[i]) <= k ) ap[i] = true;
		}	
	} 

	// for(int i=0;i<n;i++)cout<<ap[i]<<" "<<bp[i]<<endl;

	if ( ap[n-1] == true or bp[n-1] == true ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


	return 0;
}

