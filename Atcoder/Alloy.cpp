// Problem Link - https://atcoder.jp/contests/abc213/tasks/abc213_a
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

	int a,b;
	cin>>a>>b;

	if ( a>0 and b== 0 ) cout<<"Gold"<<endl;
	else if ( a==0 and b>0 ) cout<<"Silver"<<endl;
	else if ( a>0 and b>0 ) cout<<"Alloy"<<endl;


	return 0;
}
