// Problem Link - https://atcoder.jp/contests/abc168/tasks/abc168_b

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

	int k;
	cin>>k;

	string s;
	cin>>s;

	int n = s.size();

	if ( n<=k ) cout << s << endl;
	else {
		cout << s.substr(0,k) << "..." << endl;
	}

	return 0;

}

