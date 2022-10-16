// Problem Link - https://atcoder.jp/contests/abc220/tasks/abc220_a

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

	int a,b,c;
	cin>>a>>b>>c;

	int ans =0;

	for(int i=a;i<=b;i++){
		if (i%c==0) {
			cout<<i<<endl;
			ans =1;
			break;
		}
	}

	if (ans==0)cout<<"-1"<<endl;

	return 0;
}
