// Problem Link - https://atcoder.jp/contests/abc196/tasks/abc196_a

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

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	int x = max(a,b);
	int y = min(c,d);

	cout << x - y << endl;

	return 0;
}
