// Problem Link - https://atcoder.jp/contests/abc211/tasks/abc211_a
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

	float a,b;
	cin>>a>>b;

	float c = (((a-b)/3) + b);

	cout<<c<<endl;


	return 0;
}
