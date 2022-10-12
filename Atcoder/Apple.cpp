// Problem Link - https://atcoder.jp/contests/abc265/tasks/abc265_a

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

	int x,y,n;
	cin>>x>>y>>n;

	if (x*3 > y) {
		int cost = 0;
	    int times = n/3;
	    cost += times*y;
	    n -= times*3 ;
	    cost += n*x;
	    cout<<cost<<endl;
	}
	else {
		cout<<n*x<<endl;
	}



	return 0;
}
