// Problem Link - https://atcoder.jp/contests/abc200/tasks/abc200_a

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

	int n;
	cin>>n;

	if (n%100 == 0) cout << round(n/100) <<endl;
	else cout << round(n/100) + 1 << endl;

	return 0;
}
