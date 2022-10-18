// Problem Link - https://atcoder.jp/contests/abc270/tasks/abc270_b

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

	ll x,y,z;
	cin>>x>>y>>z;

	if (y<0) {
		x = -x;
		y = -y;
		z = -z;
	}

	if (x>y) {
		if (z>y) cout<<"-1"<<endl;
		else cout << abs(x-z) + abs(z) << endl;
	}
	else cout<<abs(x)<<endl;


	return 0;

}
