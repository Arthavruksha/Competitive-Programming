// Problem Link - https://atcoder.jp/contests/abc274/tasks/abc274_a

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

	double a,b;
	cin>>a>>b;

	cout << fixed << setprecision(3) << b/a << endl;



	return 0;

}

