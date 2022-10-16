// Problem Link - https://atcoder.jp/contests/abc225/tasks/abc225_a


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

	string s;
	cin>>s;

	if ( s[0] == s[1] and s[1] == s[2] ) cout<<"1"<<endl;

	else if ( (s[0] == s[1] or s[0] == s[2]) or (s[1] == s[2] or s[1] == s[0]) or (s[2] == s[1] or s[2]==s[0]) ) cout<<"3"<<endl;

	else cout<<"6"<<endl;


	return 0;
}
