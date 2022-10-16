// Problem Link - https://atcoder.jp/contests/abc230/tasks/abc230_a


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

	if (n>= 42) {
		cout<<"AGC" << setw(3) << setfill('0') << n+1 <<endl;
	}
	else cout<<"AGC" << setw(3) << setfill('0') << n <<endl;


	return 0;
}
