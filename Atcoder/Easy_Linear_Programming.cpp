// Problem Link - https://atcoder.jp/contests/abc168/tasks/abc168_b

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

	ll a,b,c,k;
	cin>>a>>b>>c>>k;

	ll sum = 0;

	while(k--){
		if ( a > 0 ) {
			sum+= 1;
			a--;
		}
		else if ( b > 0 ) {
			sum+=0;
			b--;
		}
		else if ( c > 0 )  {
			sum+=(-1);
			c--;
		}
	}

	cout<<sum<<endl;

	return 0;

}

