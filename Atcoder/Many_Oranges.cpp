// Problem Link - https://atcoder.jp/contests/abc195/tasks/abc195_b

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

	ll a,b,x;
	cin>>a>>b>>x;

	x =  x * 1000;

	ll first = 0 , second = 1e10;

	for(ll i=1;i<=1e7;i++){
		if ( (a*i)<= x and (b*i) >= x ) {
			first = max(first,i);
			second = min(second,i);
		} 
	}

	if ( first == 0 ) cout <<  "UNSATISFIABLE" << endl;
	else cout << second << " " << first << endl;


	return 0;

}

