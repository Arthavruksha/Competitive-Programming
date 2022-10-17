// Problem Link - https://atcoder.jp/contests/abc209/tasks/abc209_a
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

	int a,b;
	cin>>a>>b;

	int count = 0;

	for(int i=a;i<=b;i++) {
		count++;
	}

	cout<<count<<endl;

	return 0;
}
