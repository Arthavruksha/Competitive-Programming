// Problem Link - https://atcoder.jp/contests/abc203/tasks/abc203_a

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

	int a,b,c;
	cin>>a>>b>>c;

	if (a==b ) cout<<c<<endl;
	else if (b==c) cout<<a<<endl;
	else if (a==c) cout<<b<<endl;
	else cout<<"0"<<endl;

	return 0;
}
