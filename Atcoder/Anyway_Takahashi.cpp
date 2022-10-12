// Problem Link - https://atcoder.jp/contests/abc269/tasks/abc269_a

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

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	cout<<(a+b)*(c-d)<<endl;
	cout<<"Takahashi"<<endl;

	return 0;
}
