// Problem Link - https://atcoder.jp/contests/abc217/tasks/abc217_b

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

	set <string> ans = {"ABC","ARC","AGC","AHC"} ;

	for(int i=0;i<3;i++) {
		string s;
		cin>>s;
		ans.erase(s);
	}

	for ( auto x : ans) cout << x << endl;

	return 0;

}

