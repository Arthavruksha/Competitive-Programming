// Problem Link - https://atcoder.jp/contests/abc206/tasks/abc206_b

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

	ll i = 1;

	ll ways = 0;

	while(true) {
		sum+=i;
		i++;
		ways++;
		if (sum>=n) break;
	}

	cout<<ways<<endl;


 
	return 0;

}

