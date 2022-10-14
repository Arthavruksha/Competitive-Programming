// Problem Link - https://atcoder.jp/contests/abc249/tasks/abc249_a

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

	int a,b,c,d,e,f,x;
	cin>>a>>b>>c>>d>>e>>f>>x;

	int acount = 0;
	int bcount = 0;

	for(int i=0;i<x;i++) {
		if ( (i%(a+c)) < a ) {
			acount+=b;
		}
		if ( (i%(d+f)) < d ) {
			bcount+=e;
		}
	}

	if(acount > bcount)cout<<"Takahashi"<<endl;
	else if (bcount > acount )cout<<"Aoki"<<endl;
	else cout<<"Draw"<<endl;


	return 0;
}
