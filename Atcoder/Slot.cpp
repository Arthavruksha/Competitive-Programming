// Problem Link - https://atcoder.jp/contests/abc189/tasks/abc189_a

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

	if (s[0] == s[1] and s[1] == s[2] ) cout<<"Won"<<endl;
	else cout<<"Lost"<<endl;

	return 0;

}
