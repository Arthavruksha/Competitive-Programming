// Problem Link  - https://atcoder.jp/contests/abc236/tasks/abc236_a

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
	int a,b;
	cin>>s>>a>>b;

	char temp = s[a-1];

	s[a-1] = s[b-1];

	s[b-1] = temp;

	cout<<s<<endl;


	return 0;
}
