// Problem Link - https://atcoder.jp/contests/abc247/tasks/abc247_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

string f(ll n) {
	if ( n == 1 ) return "1";
	else return f(n-1) + " " + to_string(n) + " " +  f(n-1) ;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n;
	cin>>n;
	cout<<f(n)<<endl;


	return 0;

}

