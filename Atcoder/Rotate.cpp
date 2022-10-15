// Problem Link  - https://atcoder.jp/contests/abc235/tasks/abc235_a

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

	char a,b,c;
	cin>>a>>b>>c;

	string one  = string({a,b,c});
	string two = string({b,c,a});
	string third = string({c,a,b});

	cout<<stoi(one) + stoi(two) + stoi(third) <<endl;

	return 0;
}
