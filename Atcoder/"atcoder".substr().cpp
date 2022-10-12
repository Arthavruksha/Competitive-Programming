// Problem Link - https://atcoder.jp/contests/abc264/tasks/abc264_a

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

	int l,r;
	cin>>l>>r;
 
	string s = "atcoder";
 
	for(int i=l-1;i<r;i++) {
		cout<<s[i];
	}
	cout<<endl;


	return 0;
}
