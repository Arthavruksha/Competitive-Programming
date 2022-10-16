// Problem Link - https://atcoder.jp/contests/abc232/tasks/abc232_a


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

	char a,b,c;
	cin>>a>>b>>c;

	cout<< (int) ('0' - a) * (int) ('0' - c) << endl;


	return 0;
}
