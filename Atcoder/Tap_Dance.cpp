// Problem Link - https://atcoder.jp/contests/abc141/tasks/abc141_b

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

	for(int i=0;i<n;i++){
		if ( i%2 == 0 ) {
			if ( s[i] == 'R' or s[i] == 'U' or s[i] == 'D' ) continue;
			else {
				cout<<"No"<<endl;
				return 0;
			} 
		}
		else {
			if ( s[i] == 'L' or s[i] == 'U' or s[i] == 'D' ) continue;
			else {
				cout<<"No"<<endl;
				return 0;
			} 			
		}
	}

	cout<<"Yes"<<endl;



	return 0;

}

