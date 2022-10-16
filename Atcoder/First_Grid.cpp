// Problem Link - https://atcoder.jp/contests/abc229/tasks/abc229_a


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

	string s1,s2;
	cin>>s1>>s2;

	if (s1 == "#." and s2 == ".#") cout<<"No"<<endl;
	else if (s1 == ".#" and s2 == "#.") cout<<"No"<<endl;
	else cout<<"Yes"<<endl;


	return 0;
}
