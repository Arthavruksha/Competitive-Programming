// Problem Link - https://atcoder.jp/contests/abc174/tasks/abc174_b

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

	ll n, d;
	cin>>n>>d;

	ll ways = 0;

	for(int i=0;i<n;i++){
		ll x,y;
		cin>>x>>y;
		double temp =  sqrt( (x*x) + (y*y) );
		if (temp<=d) ways++;
	}

	cout<<ways<<endl;


	return 0;

}

