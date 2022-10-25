// Problem Link - https://atcoder.jp/contests/abc160/tasks/abc160_b

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

	ll x;
	cin>>x;

	ll happy = 0;

	if ( x%500 == 0 ){
		happy += (x/500) * 1000 ;
	}
	else {
		ll temp = x/500 ;
		happy += temp * 1000 ;
		x -= ( temp * 500 ) ;
		ll temp2 = x/5;
		happy += temp2 * 5 ;
		x -= ( temp2 * 5 ) ;
	}

	cout<<happy<<endl;



	return 0;

}

