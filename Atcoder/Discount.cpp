// Problem Link - https://atcoder.jp/contests/abc193/tasks/abc193_a

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

	float a,b;
	cin>>a>>b;

	float x = a-b;

	cout<<setprecision(12);

	cout << (x/a) * 100.0 << endl;


	return 0;
}
