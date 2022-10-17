// Problem Link - https://atcoder.jp/contests/abc187/tasks/abc187_a

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

	int first = stoi(s1.substr(0, 1)) + stoi(s1.substr(1,1)) + stoi(s1.substr(2,2)) ;
	int second = stoi(s2.substr(0, 1)) + stoi(s2.substr(1,1)) + stoi(s2.substr(2,2)) ;

	cout << max(first,second) << endl;

	return 0;

}
