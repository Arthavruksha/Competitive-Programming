// Problem Link - https://atcoder.jp/contests/abc210/tasks/abc210_b

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

	for(int i=0;i<n;i++){
		if ( s[i] == '1' ) {
			if (i%2 == 0) cout<<"Takahashi"<<endl;
			else cout<<"Aoki"<<endl;
			return 0;
		}
	}


 
	return 0;

}

