// Problem Link - https://atcoder.jp/contests/abc260/tasks/abc260_c

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

	ll n,x,y,r[100],b[100];
	cin>>n>>x>>y;

	// r[i] = max no.of blue jewel of level 1 starting from 1 red jewel of level i
	// b[i] = max no.of blue jewel of level 1 starting form 1 blue jewel of level i

	r[1] = 0 ;
	b[1] = 1; 


	for(int i=2;i<=n;i++){
		b[i] = r[i-1] + b[i-1]*y;
		r[i] = r[i-1] + b[i]*x;
 	}

 	cout<<r[n]<<endl;

	return 0;

}

