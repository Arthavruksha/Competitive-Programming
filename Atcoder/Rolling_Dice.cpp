// Problem Link - https://atcoder.jp/contests/abc208/tasks/abc208_a

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

	if (6*a >= b and a<=b) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



	return 0;
}
