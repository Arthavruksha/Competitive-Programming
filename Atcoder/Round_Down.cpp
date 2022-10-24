// Problem Link - https://atcoder.jp/contests/abc196/tasks/abc196_b

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

	int n = s.size();

	for(int i=0;i<n;i++){
		if (s[i] == '.') {
			cout<<s.substr(0,i)<<endl;
			return 0;
		}
	}

	cout<<s<<endl;

	return 0;

}

