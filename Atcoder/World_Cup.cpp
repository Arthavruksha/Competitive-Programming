// Problem Link - https://atcoder.jp/contests/abc262/tasks/abc262_a

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

	int i;
	cin>>i;

	while(i%4!=2) {
		i++;
	}

	cout<<i<<endl;

	return 0;
}
