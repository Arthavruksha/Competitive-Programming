// Problem Link  - https://atcoder.jp/contests/abc239/tasks/abc239_a

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

	float x;
	cin>>x;
	cout<<x<<endl;
	float mul = x+12800000;
	cout<<mul<<endl;
	float ans = sqrt(mul*x);
	cout<<ans<<endl;



	return 0;
}
