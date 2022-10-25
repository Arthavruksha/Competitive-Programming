// Problem Link - https://atcoder.jp/contests/abc181/tasks/abc181_b

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

	ll sum = 0;

	for(ll i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;

		sum += ((b*(b+1))/2) - ((a*(a-1))/2) ;
	}

	cout<<sum<<endl;


	return 0;

}

