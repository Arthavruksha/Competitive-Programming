// Problem Link - https://atcoder.jp/contests/abc268/tasks/abc268_b

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

	string s,t;
	cin>>s>>t;

	int n = s.size();

	string x = t.substr(0,n);

	if ( x == s ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


	return 0;

}
