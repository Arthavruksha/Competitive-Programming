// Problem Link - https://atcoder.jp/contests/abc257/tasks/abc257_a

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

	int n,x;
	cin>>n>>x;

	int ans = ((x-1)/n) ;

	cout<<char('A' + ans)<<endl;
	

	return 0;
}
