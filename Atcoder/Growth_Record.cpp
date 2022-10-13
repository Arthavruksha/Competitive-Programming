// Problem Link - https://atcoder.jp/contests/abc259/tasks/abc259_a

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


	int n,m,t,x,d;
	cin>>n>>m>>x>>t>>d;

	if ( m>=x) {
		cout<<t<<endl;
	}
	else cout<<t-((x-m)*d)<<endl;


	return 0;
}
