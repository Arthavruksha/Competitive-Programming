// Problem Link - https://atcoder.jp/contests/abc248/tasks/abc248_a

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

	int count = 45;

	for(int i=0;i<9;i++){
		count -= ((int)(s[i] - '0'));
	}

	cout<<count<<endl;


	return 0;
}
