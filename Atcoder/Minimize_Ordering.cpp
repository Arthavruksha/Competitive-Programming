// Problem Link - https://atcoder.jp/contests/abc242/tasks/abc242_b

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

	sort(s.begin(),s.end());

	cout<<s<<endl;

	return 0;

}

