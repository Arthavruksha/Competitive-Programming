// Problem Link - https://atcoder.jp/contests/abc251/tasks/abc251_a

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

	int times = 6/s.size();

	for(int i=0;i<times;i++){
		cout<<s;
	}
	cout<<endl;

	return 0;
}
