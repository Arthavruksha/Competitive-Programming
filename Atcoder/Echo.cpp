// Problem Link - https://atcoder.jp/contests/abc145/tasks/abc145_b

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

	int n;
	cin>>n;

	string s;
	cin>>s;

	string s1  = s.substr(0,n/2);
	string s2  = s.substr(n/2,n);

	if (s1 == s2) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;

}

