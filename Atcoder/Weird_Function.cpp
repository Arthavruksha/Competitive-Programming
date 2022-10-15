// Problem Link - https://atcoder.jp/contests/abc234/tasks/abc234_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int f(int x) {
	return x*x + 2*x + 3;
}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;

	cout<<f(f(f(t)+t)+f(f(t)))<<endl;

	


	return 0;
}
