// Problem link - https://codeforces.com/contest/1742/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(){
	int a,b,c;
	cin>>a>>b>>c;

	if (a+b == c) cout<<"YES"<<endl;
	else if (a+c == b)cout<<"YES"<<endl;
	else if (b+c == a)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();



	return 0;
}
