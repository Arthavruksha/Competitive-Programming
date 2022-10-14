// Problem Link - https://atcoder.jp/contests/abc250/tasks/abc250_a

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

	int h,w,r,c;
	cin>>h>>w>>r>>c;

	int count = 0;

	if (r-1 <= h and r-1 > 0) count++;
	if (c-1 <= w and c-1 > 0) count++;
	if (c+1 <= w) count++;
	if (r+1 <= h) count++;

	cout<<count<<endl;


	return 0;
}
