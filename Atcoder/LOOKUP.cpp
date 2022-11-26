// Problem Link - https://atcoder.jp/contests/abc279/tasks/abc279_b

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

	ll n =  s.size();
	ll m = t.size();

	for(int i=0;i<n;i++){
		string ans;
		for(int j=i;j<(i+m);j++){
			if ( j>=n ) break;
			ans+=s[j];
		}
		if ( ans == t ) {
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;

 
	return 0;
}

