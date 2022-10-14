// Problem Link - https://atcoder.jp/contests/abc245/tasks/abc245_a

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

	if (a<c) cout<<"Takahashi"<<endl;
	else if (a>c) cout<<"Aoki"<<endl;
	else {
		if (b<=d) cout<<"Takahashi"<<endl;
		else cout<<"Aoki"<<endl;
	}



	return 0;
}
