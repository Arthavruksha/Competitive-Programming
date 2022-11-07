// Problem Link - https://atcoder.jp/contests/abc131/tasks/abc131_b

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

	ll n,l;
	cin>>n>>l;

	ll arr[n+1];

	ll sum = 0;

	ll least = 1e10;

	for(int i=1;i<=n;i++){
		arr[i] = ( (l+i) - 1 ) ;
		sum+=arr[i];
		least = min(least,abs(arr[i]));
	}

	if ( sum <= 0 ) cout << sum + least << endl;
	else cout << sum - least << endl;


	return 0;

}

