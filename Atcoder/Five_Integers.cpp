//  Problem Link - https://atcoder.jp/contests/abc268/tasks/abc268_a

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

	set <int> rapid;

	for(int i=0;i<5;i++) {
		int a;
		cin>>a;
		rapid.insert(a);
	}

	cout<<rapid.size()<<endl;

	return 0;
}
