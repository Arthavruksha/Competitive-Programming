// Problem Link - https://atcoder.jp/contests/abc180/tasks/abc180_b

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

	ll n;
	cin>>n;

	ll mansum = 0 , cheb = 0;
	ll eusum = 0;

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		mansum += abs(x);
		eusum +=  abs(x)*abs(x);
		cheb = max(cheb,abs(x));
	}

	cout << mansum << endl;
	cout << setprecision(15) << sqrt(eusum) << endl;
	cout << cheb << endl;


	return 0;

}

