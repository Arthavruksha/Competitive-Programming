// Problem Link - https://atcoder.jp/contests/abc258/tasks/abc258_a

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

	int hour = n/60;
	int min = n%60;

	cout << 21+hour << ':' << setw(2) << setfill('0') << min <<endl;

	return 0;
}
