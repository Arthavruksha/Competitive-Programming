// Problem Link - https://atcoder.jp/contests/abc158/tasks/abc158_b

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

	ll n,a,b;
	cin>>n>>a>>b;

	ll k1 = (n/(a+b)) * a ;
	ll k2 = n%(a+b);
	k1 += min(k2,a);
	
	cout << k1 << endl;


	return 0;

}

