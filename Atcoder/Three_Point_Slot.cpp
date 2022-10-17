// Problem Link - https://atcoder.jp/contests/abc188/tasks/abc188_a

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

	int ans = abs(x-y);

	if (ans<3)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;

}
