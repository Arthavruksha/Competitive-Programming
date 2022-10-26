// Problem Link - https://atcoder.jp/contests/abc148/tasks/abc148_b

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

	ll n;
	cin>>n;
	
	string s,t;
	cin>>s>>t;

	for(int i=0;i<n;i++){
		cout<<s[i]<<t[i];
	}



	return 0;

}

