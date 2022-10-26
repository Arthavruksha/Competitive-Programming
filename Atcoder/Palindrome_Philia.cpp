// Problem Link - https://atcoder.jp/contests/abc147/tasks/abc147_b

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

	string s;
	cin>>s;

	ll n = s.size();

	ll count = 0;

	for(int i=0;i<n;i++) if ( s[i] != s[n-1-i] ) count++;

	cout<<count/2<<endl;


	return 0;

}

