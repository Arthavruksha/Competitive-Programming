// Problem Link - https://atcoder.jp/contests/abc170/tasks/abc170_b

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

	ll x,y;
	cin>>x>>y;

	for(int i=0;i<=x;i++){
		if ( 2*i + ( 4*(x-i) ) == y ) {
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;

	return 0;

}

