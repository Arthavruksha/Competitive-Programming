// Problem Link - https://atcoder.jp/contests/abc223/tasks/abc223_a

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
	

	int n;
	cin>>n;

	if (n%100 == 0 and n>=100) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



	return 0;
}
