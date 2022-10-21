// Problem Link - https://atcoder.jp/contests/abc248/tasks/abc248_b

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

	ll a,b,k;
	cin>>a>>b>>k;

	ll count = 0;

	while(a<b) {
		a *= k;
		count++;
	}

	cout<<count<<endl;


	return 0;

}

