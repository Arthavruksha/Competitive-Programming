// Problem Link - https://atcoder.jp/contests/abc186/tasks/abc186_a

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

	int n,w;
	cin>>n>>w;

	cout << n/w << endl;

	return 0;

}
