// Problem Link - https://atcoder.jp/contests/abc233/tasks/abc233_a

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

	int x,y;
	cin>>x>>y;

	int count = 0;

	while (x<y) {
		x+=10;
		count++;
	}

	cout<<count<<endl;


	return 0;
}
