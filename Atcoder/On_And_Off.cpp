// Problem Link - https://atcoder.jp/contests/abc228/tasks/abc228_a


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

	int s,t,x;
	cin>>s>>t>>x;

	if (s<t) {
		cout<< (s<=x and t>x ? "Yes" : "No" ) << endl;
	}
	else cout<< (s<=x or t>x ? "Yes" : "No" ) << endl;


	return 0;
}
