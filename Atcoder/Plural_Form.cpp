// Problem Link - https://atcoder.jp/contests/abc179/tasks/abc179_a

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

	int n= s.size();

	if (s[n-1] == 's') cout<<s<<"es"<<endl;
	else cout<<s<<"s"<<endl;

	return 0;

}
