// Problem link - https://atcoder.jp/contests/abc246/tasks/abc246_a

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

	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;

	if (x1==x2)cout<<x3<<" ";
	else if (x2==x3)cout<<x1<<" ";
	else if (x3==x1) cout<<x2<<" ";

	if (y1==y2)cout<<y3<<" ";
	else if (y2==y3)cout<<y1<<" ";
	else if (y3==y1) cout<<y2<<" ";

	return 0;
}
