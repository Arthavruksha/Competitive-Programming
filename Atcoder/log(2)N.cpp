// Problem Link - https://atcoder.jp/contests/abc215/tasks/abc215_b

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

	ll ans  = 1;
	ll k = 0;

	while(ans<=n){
		ans *= 2;
		k++; 
	}

	cout<<k-1<<endl;


 
	return 0;

}

