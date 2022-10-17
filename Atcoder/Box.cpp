// Problem Link - https://atcoder.jp/contests/abc180/tasks/abc180_a

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

	int n,a,b;
	cin>>n>>a>>b;

	cout << (n-a) + b << endl;

	return 0;

}
