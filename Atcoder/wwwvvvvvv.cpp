// Problem Link - https://atcoder.jp/contests/abc279/tasks/abc279_a

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

	for(int i=0;i<n;i++){
		if ( s[i] == 'v' ) count++;
		else count += 2;
	}

	cout<<count<<endl;


 
	return 0;
}

