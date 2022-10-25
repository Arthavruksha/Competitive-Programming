// Problem Link - https://atcoder.jp/contests/abc172/tasks/abc172_b

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

	ll n = s.size();
	ll ways = 0;

	for(int i=0;i<n;i++){
		if ( s[i] != t[i] ) ways++;
	}
    
    cout<<ways<<endl;

	return 0;

}

