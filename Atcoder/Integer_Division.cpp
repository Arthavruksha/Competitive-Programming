// Problem Link - https://atcoder.jp/contests/abc239/tasks/abc239_b

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

	ll x;
	cin>>x; 

	if (x<0 and x%10 != 0) {
		cout << x/10 - 1 << endl;
	}
	else cout << x/10 << endl;

	return 0;

}

