// Problem Link - https://codeforces.com/problemset/problem/1682/A

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
	ll n;
	string s;
	cin>>n>>s;
	ll count = 1;
	ll mid = n/2;

	for(int i=mid;i>0;i--){
		if ( s[i] == s[i-1] && (i-1 >= 0) ) {
			count++;
		}
		else{
			break;
		}
	}
	for(int i=mid;i<n;i++){
		if ( s[i] == s[i+1] && (i+1 < n) ) {
			count++;
		}
		else {
			break;
		}
	}

	cout<<count<<endl;
} 

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}

	return 0;
}

