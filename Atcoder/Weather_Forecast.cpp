// Problem Link - https://atcoder.jp/contests/abc218/tasks/abc218_a

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
	string s;
	cin>>s;

	if (s[n-1] == 'o')cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;
}
