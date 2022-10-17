// Problem Link - https://atcoder.jp/contests/abc205/tasks/abc205_a

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

	float c = b/100;

	cout<< c*a << endl;


	return 0;
}
