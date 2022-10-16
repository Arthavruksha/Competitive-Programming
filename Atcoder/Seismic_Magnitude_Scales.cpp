// Problem Link - https://atcoder.jp/contests/abc221/tasks/abc221_a

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

	int a,b;
	cin>>a>>b;

	int mul = abs(a-b);
	int ans = pow(32,mul);

	if (ans == 0) cout<<1<<endl;
	else cout<<ans<<endl;

	return 0;
}
